package platform.zonetry.com.smproject;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.widget.TextView;

import jni.JniManager;

public class MainActivity extends AppCompatActivity {


    private static final String TAG = "MainActivityTAG";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        String str1=new String("abc");
        String str2="";
        Log.i(TAG, String.format("MainActivity.onCreate:Before: str1=%s, str2=%s", str1, str2));
        str2= JniManager.SM2_KEY(str1);
        tv.setText(JniUtil.stringFromJNI());
        Log.i(TAG, String.format("MainActivity.onCreate:After: str1=%s, str2=%s", str1, str2));
        int a=11;
        int b=3;
        int c=0;
        c = JniManager.addAB(a,b);
        Log.i(TAG, String.format("MainActivity.onCreate: a=%d, b=%d, c=%d", a, b,c));
    }
    static {
        System.loadLibrary("JniManager");
    }

}
