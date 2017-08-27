/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * Warning: This file is GENERATED, and should not be modified
 */
var bootstrap = kroll.NativeModule.require("bootstrap"),
	invoker = kroll.NativeModule.require("invoker"),
	Titanium = kroll.binding("Titanium").Titanium;

function moduleBootstrap(moduleBinding) {
	function lazyGet(object, binding, name, namespace) {
		return bootstrap.lazyGet(object, binding,
			name, namespace, moduleBinding.getBinding);
	}

	var module = moduleBinding.getBinding("ti.androidpay.AndroidpaymentModule")["Androidpayment"];
	var invocationAPIs = module.invocationAPIs = [];
	module.apiName = "Androidpayment";

	function addInvocationAPI(module, moduleNamespace, namespace, api) {
		invocationAPIs.push({ namespace: namespace, api: api });
	}

	addInvocationAPI(module, "Androidpayment", "Androidpayment", "createCart");addInvocationAPI(module, "Androidpayment", "Androidpayment", "createLineItem");addInvocationAPI(module, "Androidpayment", "Androidpayment", "createPaymentMethodTokenizationParameters");
		if (!("__propertiesDefined__" in module)) {Object.defineProperties(module, {
"Cart": {
get: function() {
var Cart =  lazyGet(this, "ti.androidpay.CartProxy", "Cart", "Cart");
return Cart;
},
configurable: true
},
"LineItem": {
get: function() {
var LineItem =  lazyGet(this, "ti.androidpay.LineItemProxy", "LineItem", "LineItem");
return LineItem;
},
configurable: true
},
"PaymentMethodTokenizationParameters": {
get: function() {
var PaymentMethodTokenizationParameters =  lazyGet(this, "ti.androidpay.PaymentMethodTokenizationParametersProxy", "PaymentMethodTokenizationParameters", "PaymentMethodTokenizationParameters");
return PaymentMethodTokenizationParameters;
},
configurable: true
},

});
module.constructor.prototype.createCart = function() {
return new module["Cart"](arguments);
}
module.constructor.prototype.createLineItem = function() {
return new module["LineItem"](arguments);
}
module.constructor.prototype.createPaymentMethodTokenizationParameters = function() {
return new module["PaymentMethodTokenizationParameters"](arguments);
}
}
module.__propertiesDefined__ = true;
return module;

}
exports.bootstrap = moduleBootstrap;
