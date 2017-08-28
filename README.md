# Ti.Android
<img src="https://www.clearviewfcu.org/home/fiFiles/static/images/FAQs_Android_PayLogo.png" width=180/>
This a Axway Titanium module for [Android payment](https://developers.google.com/android-pay/tutorial) . 

## Installation

First on CLI
```
gittio install ti.android
```

Then you have to add the module to your project inside `tiapp.xml`
## Constants

* WALLET_ENVIRONMENT_TEST
* WALLET_ENVIRONMENT_PRODUCTION
* RESULT_OK
* RESULT_ERROR
* ROLE_REGULAR
* ROLE_SHIPPING
* ROLE_TAX


## Usage

### Is the user ready to pay with Android Pay?

Before starting the Android Pay flow, use the isReadyToPay() method to check whether the user has the Android Pay app installed and is ready to pay. If this method returns true, show the Android Pay button. If it returns false, display other checkout options along with text notifying the user to set up the Android Pay app.

```javascript
const AP = require("ti.androidpay");
AP.addEventListener("load",function(e){
  console.log(e);
  handlePayment();
});
AP.isReadyToPay({
  onload : function(e) {
    console.log(e);
    handlePayment();
  }
});
```
You can use either the callbackj or the listener.

## Request a Payment Token

Before you can request any wallet information, you must build parameters to inform the Android Pay API what type of payment token you wish to receive in the response. The PaymentMethodTokenizationParameters builder lets you establish the parameters of the token. The inputs you provide to this call depend on how you plan to process payments, and may also vary depending on your payment processor provider. You will initialize either a network token or a payment gateway token.

### Request a payment gateway token

If you use Braintree, Stripe, or Vantiv to process payments, you can set provider-specific parameters (a publishable key) to receive a gateway token that you can charge with your provider. Please refer to the Braintree, Stripe or Vantiv developer documentation for more information.

The following example shows how to request a token from Stripe:

```javascript
let paymentMethodTokenizationParameters = AP.createPaymentMethodTokenizationParameters({
       "gateway" : "stripe",  
       "stripe:publishableKey" : publishableKey,  
       "stripe:version", version
});  
 ```
### Request a network token

Set the tokenization type and add a publicKey parameter as shown:
```javascript
let paymentMethodTokenizationParameters = AP.createPaymentMethodTokenizationParameters({  
     "type" : AP.NETWORK_TOKEN,
     "publicKey", publicKey
    }); 
```    
## Create a Masked Wallet request

You must create an instance of MaskedWalletRequest to retrieve the Masked Wallet information (such as billing address, shipping address, masked backing payment instrument number, and cart items) from the Android Pay API. The MaskedWalletRequest object must be passed in when you initialize the purchase button in the next section.

At this point, you won't have the user's chosen shipping address from Android Pay, so you must create an estimate of the shipping costs and tax. If you set the shopping cart as shown below, make sure the cart total matches the sum of the line items added to the cart.


### Create [LineItem](https://developers.google.com/android/reference/com/google/android/gms/wallet/LineItem?hl=bg)

```javascript
let product = AP.createLineItem({
  "CurrencyCode" : "EUR",
  "Description" : "My awesome bicycle",
  "Quantity" : 2,
  "Role" : AP.ROLE_REGULAR,
  "TotalPrice" : 94.22,	
  "UnitPrice" : 47.11
});
let shipping = AP.createLineItem({
  "CurrencyCode" : "EUR",
  "Description" : "Shipping by DHL",
  "Quantity" : 1,
  "Role" : AP.ROLE_SHIPPING,
  "TotalPrice" : 5.00,	
  "UnitPrice" : 5.00
});
let tax = AP.createLineItem({
  "CurrencyCode" : "EUR",
  "Description" : "Tax",
  "Quantity" : 1,
  "Role" : AP.ROLE_TAX,
  "TotalPrice" : 1.00,	
  "UnitPrice" : 1.00
});
```

### Create [Cart](https://developers.google.com/android/reference/com/google/android/gms/wallet/Cart)

```javascript
let cart = AP.createCart({
       "CurrencyCode" : "EUR",
       "TotalPrice" : 104.22
});
cart.addLineItem(product);
cart.addLineItem(tax);
cart.addLineItem(shipping);
```

### Create Wallet

The following example creates the Masked Wallet request using the builder pattern:

```javascript
let request = AP.createwWallet({  
    "MerchantName" : "Acme Inc",  
    "PhoneNumberRequired" : true,  
    "ShippingAddressRequired" : true, 
    "CurrencyCode" : "EUR",  
    "EstimatedTotalPrice" : cartTotal,  
    // Create a Cart with the current line items. Provide all the information  
    // available up to this point with estimates for shipping and tax included.  
    "cart" : cart,
    "PaymentMethodTokenizationParameters" : paymentMethodTokenizationParameters
});

```
