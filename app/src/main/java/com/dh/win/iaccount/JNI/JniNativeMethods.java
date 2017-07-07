package com.dh.win.iaccount.JNI;

/**
 * Created by win on 2017/7/7.
 */

public class JniNativeMethods {
    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native byte YihuoIndentify(byte b[]);
}
