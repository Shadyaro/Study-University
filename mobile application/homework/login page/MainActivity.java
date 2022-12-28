package com.example.homework;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import org.w3c.dom.Text;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void buttonlogin(View v) {
        // calling the TextView by id
        EditText myTextView1 = findViewById(R.id.usernameedit);
        EditText myTextView2 = findViewById(R.id.usernametext1);
        TextView myTextView3 = findViewById(R.id.viewid);

        // get back the text of the TextView
        String txtvStrVal1 = String.valueOf(myTextView1.getText().toString().equals("admin"));
        String txtvStrVal2 = String.valueOf(myTextView2.getText().toString().equals("1234"));

        if (txtvStrVal1 == txtvStrVal2) {
            myTextView3.setText("corrent account");
        } else {
            myTextView3.setText("wrong account");
        }

    }
}