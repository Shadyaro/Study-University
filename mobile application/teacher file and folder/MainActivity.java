package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    TextView txtVResult;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button btnUp = findViewById(R.id.btn_up);
        btnUp.setOnClickListener(this);

        Button btnDown = findViewById(R.id.btn_down);
        //btnDown.setOnClickListener(this);

        btnDown.setOnClickListener( new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String v = txtVResult.getText().toString();
                int vi = Integer.parseInt(v);
                vi = vi - 1;
                txtVResult.setText(""+vi);
            }
        });



         txtVResult = findViewById(R.id.txtV_result);



    }

    @Override
    public void onClick(View view) {
        String v = txtVResult.getText().toString();

        int vi = Integer.parseInt(v);

        if (view.getId() == R.id.btn_up){

            vi = vi + 1;


        }else if (view.getId() == R.id.btn_down){

            vi = vi - 1;

        }
        txtVResult.setText(""+vi);


    }

    public void mup(View v){

        txtVResult.setText("0");

    }

}