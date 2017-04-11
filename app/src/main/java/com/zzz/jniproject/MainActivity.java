package com.zzz.jniproject;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        final TextView showText = (TextView) findViewById(R.id.show_text);
        showText.setText(testJni());

    }

    static {
        System.loadLibrary("MyLibrary");
    }

    public native String testJni();

}
