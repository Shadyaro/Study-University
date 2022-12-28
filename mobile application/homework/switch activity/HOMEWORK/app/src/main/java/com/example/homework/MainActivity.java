package com.example.homework;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

//        Intent recievedIntent = getIntent();
//        String stdnName = recievedIntent.getStringExtra("studentName");

//        Toast.makeText(this, "Hi "+stdnName, Toast.LENGTH_SHORT).show();
        Toast.makeText(this, "Hi Group A", Toast.LENGTH_SHORT).show();

        Button btnGoToActvTwo = findViewById(R.id.btn_main_to_actv2);

        btnGoToActvTwo.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                Intent startActvTwoIntent = new Intent(
                        getApplicationContext(),
                        MainActivity2.class);

                startActvTwoIntent.putExtra("studentName", "Group B");

                startActivity(startActvTwoIntent);
                finish();
            }
        });

//        Button btnGoToActvThree = findViewById(R.id.btn_main_to_actv3);
//
//        btnGoToActvThree.setOnClickListener(new View.OnClickListener() {
//            @Override
//            public void onClick(View view) {
//                Intent startActvTwoIntent = new Intent(
//                        getApplicationContext(),
//                        MainActivity3.class);
//
//                startActvTwoIntent.putExtra("studentName", "Group C");
//
//                startActivity(startActvTwoIntent);
//
//            }
//        });

    }
}