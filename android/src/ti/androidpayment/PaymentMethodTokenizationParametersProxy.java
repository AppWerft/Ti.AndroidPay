package ti.androidpayment;
import java.math.BigDecimal;
import java.util.ArrayList;

import org.appcelerator.kroll.KrollDict;
import org.appcelerator.kroll.KrollProxy;
import org.appcelerator.kroll.annotations.Kroll;
import org.appcelerator.titanium.TiC;
import org.appcelerator.kroll.common.Log;
import org.appcelerator.kroll.common.TiConfig;
import org.appcelerator.titanium.util.TiConvert;
import org.appcelerator.titanium.proxy.TiViewProxy;
import org.appcelerator.titanium.view.TiCompositeLayout;
import org.appcelerator.titanium.view.TiCompositeLayout.LayoutArrangement;
import org.appcelerator.titanium.view.TiUIView;

import com.google.android.gms.wallet.Cart;
import com.google.android.gms.wallet.Cart.Builder;
import com.google.android.gms.wallet.FullWalletRequest;
import com.google.android.gms.wallet.LineItem;
import com.google.android.gms.wallet.MaskedWalletRequest;
import com.google.android.gms.wallet.NotifyTransactionStatusRequest;
import com.google.android.gms.wallet.PaymentMethodTokenizationParameters;

import android.app.Activity;

@Kroll.proxy(creatableInModule = AndroidpaymentModule.class)
public class PaymentMethodTokenizationParametersProxy extends KrollProxy {
	
	private PaymentMethodTokenizationParameters parameters;
	private String gateway;
	private String publicKey;
	private int type;
	// Constructor
		public PaymentMethodTokenizationParametersProxy() {
			super();
		}

	
	@Override
	public void handleCreationDict(KrollDict opts) {
		super.handleCreationDict(opts);
		if (opts.containsKeyAndNotNull("gateway")) {
			gateway = opts.getString("gateway");
		}
		if (opts.containsKeyAndNotNull("publicKey")) {
			publicKey = opts.getString("publicKey");
		}
		if (opts.containsKeyAndNotNull("type")) {
			type = opts.getInt("type");
		}
		
	}
	
	public PaymentMethodTokenizationParameters getParameters() {
		return parameters;
		
}

}
