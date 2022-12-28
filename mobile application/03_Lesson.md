## Strings

* xml string

```xml

<string name="buttonUp">MyUpButton</string>

```

* xml activity

```xml

android:text="@string/buttonUp"

```

* java

```java

string string = getString(R.string.buttonUp);

```

## Array of Strings

* xml string

```xml

<string-array name="Tshit_Size">
    <item>Large</item>
    <item>Medium</item>
    <item>Small</item>
</string-array>

```

* xml activity

```xml

android:entries="@array/Tshit_Size"

```

* java

```java

String res = getResources();
String[] array_string = res.StringArray(R.array.Tshit_Size);

```

## Color

* xml color

```xml

<color name="black">#00000</color>

```

* xml activity

```xml

android:background="@color/black"

```

* java

```java

String res = getResources();
int color = res.getColor(R.color.black)

```

## Dimension

* xml dimens

```xml

<dimen name="font_size">18sp</dimen>

```

* xml activity

```xml

android:textSize="@dimen/font_size"

```

* java

```java

String res = getResources();
float dimen = res.getDimension(R.dimen.font_size)

```

## EditText

* textPassword (input type)

* textAutoCorrect (input type)

* phone (input type)

* xml

```xml

android:inputType(textPassword)
android:inputType(textAutoCorrect)
android:inputType(phone)

```


## Toast

```java

Toast toast = Toast.makeText(getApplicationContext, "Your Message", Toast.LENGTH_LONG);
toast.show();

```

## Log Class

* API for sending log output.

```java

Log.v(String, String) (verbose)
Log.i(String, String) (information)
Log.d(String, String) (debug)
Log.w(String, String) (warning)
Log.e(String, String) (error)

```



## dp

* dp (Density-independent Pixels )

* abstract unit based on the physical density of the screen.

* When running on a higher density screen, the number of pixels used to draw 1dp is scaled up by a factor appropriate for the screen's dpi. Likewise, when on a lower density screen, the number of pixels used for 1dp is scaled down. The ratio of dp- to-pixel will change with the screen density, but not necessarily in direct proportion.

* px = dp * (dpi/160)

## dp vs px

* Always use dp to pecify dimension of Views.

## sp

* sp (Scale-independent Pixels )

* This is like the dp unit, but it is also scaled by the user's font size preference.

* use sp for text size because it is scaled by the user font size preference.

