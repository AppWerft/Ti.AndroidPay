/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /Users/fuerst/Documents/MLearning/Ti.AndroidPayment/android/build/generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/Users/fuerst/Documents/MLearning/Ti.AndroidPayment/android/build/generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.androidpay.CartProxy.h"
#include "ti.androidpay.LineItemProxy.h"
#include "ti.androidpay.AndroidpaymentModule.h"
#include "ti.androidpay.PaymentMethodTokenizationParametersProxy.h"


#line 16 "/Users/fuerst/Documents/MLearning/Ti.AndroidPayment/android/build/generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 32, duplicates = 0 */

class AndroidpaymentBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
AndroidpaymentBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
AndroidpaymentBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 4,
      MIN_WORD_LENGTH = 23,
      MAX_WORD_LENGTH = 54,
      MIN_HASH_VALUE = 23,
      MAX_HASH_VALUE = 54
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 21 "/Users/fuerst/Documents/MLearning/Ti.AndroidPayment/android/build/generated/KrollGeneratedBindings.gperf"
      {"ti.androidpay.CartProxy",::ti::androidpay::androidpayment::CartProxy::bindProxy,::ti::androidpay::androidpayment::CartProxy::dispose},
      {""}, {""}, {""},
#line 20 "/Users/fuerst/Documents/MLearning/Ti.AndroidPayment/android/build/generated/KrollGeneratedBindings.gperf"
      {"ti.androidpay.LineItemProxy",::ti::androidpay::androidpayment::LineItemProxy::bindProxy,::ti::androidpay::androidpayment::LineItemProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 19 "/Users/fuerst/Documents/MLearning/Ti.AndroidPayment/android/build/generated/KrollGeneratedBindings.gperf"
      {"ti.androidpay.AndroidpaymentModule",::ti::androidpay::AndroidpaymentModule::bindProxy,::ti::androidpay::AndroidpaymentModule::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 18 "/Users/fuerst/Documents/MLearning/Ti.AndroidPayment/android/build/generated/KrollGeneratedBindings.gperf"
      {"ti.androidpay.PaymentMethodTokenizationParametersProxy",::ti::androidpay::androidpayment::PaymentMethodTokenizationParametersProxy::bindProxy,::ti::androidpay::androidpayment::PaymentMethodTokenizationParametersProxy::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 22 "/Users/fuerst/Documents/MLearning/Ti.AndroidPayment/android/build/generated/KrollGeneratedBindings.gperf"

