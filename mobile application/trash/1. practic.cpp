// prove the xml version and encoding style

<?xml version="1.0" encoding="utf-8"?>


// library
xmlns:android="http://schemas.android.com/apk/res/android"

// library
xmlns:tools="http://schemas.android.com/tools"

// contex of my java ( MainActivity )
tools:context=".MainActivity"


// using LinearLayout for coding or center parent style
<LinearLayout>

</LinearLayout>


// using LinearLayout for coding or id style

<RelativeLayout>

</RelativeLayout>



// creating button
<Button

....

>


// creating textview

<TextView

....

>


// creating textview

<EditText

....

>



// width is match the parent
android:layout_width="match_parent"

// width is height the parent
android:layout_height="match_parent"

// take id to anything you like
android:id="@+id/buttonU"

// send item to the center in verticle way of the device
android:layout_gravity="center"

// take margin to the left
android:layout_marginLeft="45dp"

// take margin to the top
android:layout_marginTop="450dp"

// take margin to the right
android:layout_marginRight="450dp"

// take padding to the item ( padding = height-padding)
android:padding="8dp"

// take text to any item you have
android:text="UP"

// take activity onClick lissoner
android:onClick="incrementValue"

// control size of the text
android:textSize="22dp"

// take any style to the text like bold or italic
android:textStyle="bold" 

// move every thing to the center of the page with this parent or item that have in the below of own item 
android:layout_centerInParent="true"

// take padding to the left
android:paddingLeft="16dp"

// take padding to the right
android:paddingRight="16dp"




// putting item to the // does not important
android:orientation="horizontal"

// taking color to the background
android:background="#1E3D3D"






// EditText // take text to text that can be edit
android:hint="Enter Your Username :)"

// EditText // taking color to EditText
android:textColorHint="#1fb805"

// EditText // taking special input to the EditText
android:inputType="numberPassword"





// TextView // taking color to TextView
android:textColor="#42bfff"







// RelativeLayout // take item to below of other item using id
android:layout_below="@id/txtV_result"

// RelativeLayout // take item to below of other item using id
android:layout_below="@id/txtV_result"

// RelativeLayout // take item to above of other item using id of target item you want put it above
android:layout_above="@id/txtV_result"

// RelativeLayout // take item to below of other item using id of target item you want put it below
android:layout_below="@id/txtV_result"

// move item with there friend parent to the center in horizontal device
android:layout_centerHorizontal="true"

// move item to below target item in there position using id
android:layout_alignBaseline="@id/btn_up"

// take item to the right
android:layout_alignParentRight="true"

// take item to the left
android:layout_alignParentLeft="true"

// move item to the right of target item using id
android:layout_toRightOf="@id/btn_up"





