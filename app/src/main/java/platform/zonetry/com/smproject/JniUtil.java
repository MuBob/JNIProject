package platform.zonetry.com.smproject;

/**
 * Created by Administrator on 2017/8/10.
 */

public class JniUtil {
    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public static native String stringFromJNI();

    public static native void generatePubKeyBypriKey(String str1, String str2);
    public static native int getAddResult(int a, int b);
}
