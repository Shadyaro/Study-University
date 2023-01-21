package com.example.homework;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity3 extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_three);

        Intent recievedIntent = getIntent();
        String stdnName = recievedIntent.getStringExtra("studentName");

        Toast.makeText(this, "Hi "+stdnName, Toast.LENGTH_SHORT).show();

        Button backButton = findViewById(R.id.btc_back_to_C);
        backButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent startActvTwoIntent = new Intent(
                        getApplicationContext(),
                        MainActivity.class);

                startActvTwoIntent.putExtra("studentName", "Group A");

                startActivity(startActvTwoIntent);
            }
        });

        Button ForwardButton = findViewById(R.id.go_to_D);
        ForwardButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent startActvTwoIntent = new Intent(
                        getApplicationContext(),
                        MainActivity4.class);

                startActvTwoIntent.putExtra("studentName", "Group D");

                startActivity(startActvTwoIntent);
                finish();
            }
        });

    }
}