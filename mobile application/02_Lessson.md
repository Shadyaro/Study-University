### Slides: 3,4,7,8,9,12,13,14,1,15,17,19,22,23,24 and 25

## View

* Views are the definer for the basic building blocks of Android application’s UI.

* View classes represent elements on the screen and are responsible for interacting with users through events.

* Activities contains Views.

* Views are defined in XML files.

* Every Android screen contains a hierarchical tree of view elements

* View such as text elements, input elements, images, buttons, …etc.

## Types of Layout

1. FrameLayout:

   * FrameLayout the default position is the top – left corner, through you can use `gravity` attribute to alter its location
   
   * Adding new children stacks in FrameLayout will add to the top of the previous child

2. Linear Layout
   
   * It allows you to create simple UI elements that `align a sequence of child Views` in either a `vertical or a horizontal line`.

   * The Linear Layout supports a `“weight”` control the `relative size of each child View` `within the available space`.
   
   * orientation attribute defines direction:  `android`:orientation=`“vertical” or “horizontal”`.
   
## Relative Layout

* One of the most `flexible` of the native layouts

* It lets you to `define the positions of each child` View `relative` to the other child and to the `screen boundaries`.

* Children specify position relative to parents or to each others (`specified by ID`)

## Grid Layout

* `GridLayout` uses a `rectangular grid of infinitely` thin lines to layout Views in a `series of rows and columns`

* `Two Dimensional` Scrollable Grid

* Items inserted into layout via a `ListAdapter`

* GridLayout introduced in Android `4.0 (API level 14)`

* GridLayout will generally be `faster` and take `less memory` than a `TableLayout`.


## Table Layout

* TableLayout lets you layout Views using a grid of rows columns.

* Rows normally are TableRows. TableRows contain other elements, such as Buttons, Text, RadioButton, …etc

## Absolute Layout

* Each child View’s position is defined in absolute coordinates (x, y)

* In this layout your layout cannot dynamically adjust for different screen resolutions and orientation

## Complex View

* ListView: (Like JList in Java swing )
    - A scrollable list displayed vertically
    - Items added via a ListAdapter as in GridView

* android:divider drawable or color to draw between list items

* android:dividerHeight height of the divider

* android:entries reference to an array resource that will populate the ListView

* SpinnerView: (Like ComboBox (drop down menu of choices) in Java swing )

* android:entries tells the Spinner to use a particular array resource


* Weight
    * android:layout_weight
    * relative values between 0.0 and 1.0

* Gravity
    * component alignment
    * android:layout_gravity


## wrap_content & match_parent

* wrap_content: wrap_content: use only the amount of space necessary.

* match_parent: constant expands the View to match the available space within the parent View.