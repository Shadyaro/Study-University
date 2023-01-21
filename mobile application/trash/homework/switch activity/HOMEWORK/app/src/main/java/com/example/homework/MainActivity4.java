package com.example.homework;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity4 extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_four);

        Intent recievedIntent = getIntent();
        String stdnName = recievedIntent.getStringExtra("studentName");

        Toast.makeText(this, "Hi "+stdnName, Toast.LENGTH_SHORT).show();

        Button backButton = findViewById(R.id.btn_cvt1_back);
        backButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent startActvTwoIntent = new Intent(
                        getApplicationContext(),
                        MainActivity3.class);

                startActvTwoIntent.putExtra("studentName", "Group C");
                startActivity(startActvTwoIntent);

                finish();
            }
        });
    }
}