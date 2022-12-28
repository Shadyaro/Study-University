package com.example.lanya_application;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import org.w3c.dom.Text;

public class MainActivity extends AppCompatActivity  {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }


// Start operation
    public void incrementValue(View v) {
        // calling the TextView by id
        TextView myTextView = findViewById(R.id.viewid);

        // get back the text of the TextView
        String txtvStrVal = myTextView.getText().toString();
        // convert string to integer
        int txtvIntVal = Integer.parseInt(txtvStrVal);

        // increment the value
        txtvIntVal++;
        // set text to my TextView 
        myTextView.setText(txtvIntVal+"");
//        myTextView.setText(txtvIntVal);

        if(txtvIntVal == 20) {
            myTextView.setText("0");
        }

    }


    public void decrementValue(View v) {
        // calling the TextView by id
        TextView myTextView = findViewById(R.id.viewid);

        String txtvStrVal = myTextView.getText().toString();
        // convert string to integer
        int txtvIntVal = Integer.parseInt(txtvStrVal);

        // decrement the value
        txtvIntVal--;
        // set text for my TextView
        myTextView.setText(txtvIntVal+"");
//        myTextView.setText(txtvIntVal);

        if(txtvIntVal == -20) {
            myTextView.setText("0");
        }
    }


    public void resetValue(View v) {
        // calling the TextView by id
        TextView myTextView = findViewById(R.id.viewid);

        // convert string to integer
        // set text for my textview
        myTextView.setText("0");
    }
}