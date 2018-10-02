1. How do you find the PHP Version in command prompt that is running in a computer ?

Ans: `php -v`

2. What is the command used to list all the extensions loaded in PHP ?

Ans: `php -m`

3. what is the output of the following program ?

```
<? php
$name = 'John';
echo "Hello $name";
?>
```

4. What is the difference between print_r() and var_dump() ?


5. What is the output of the following code ?

    ```
    <?php
    $a = 1 + '4 chickens';
    echo "A : " . $a;
    $b = '4 Chickens' + 1;
    echo "B : " . $b;
    ?>
    ```

 6. What is the output of the following program ?

    ```
    <?php
    $a = ['apple', 'orange', 'guva'];
    foreach( $a as $k => $v ){
        echo "Key :" . $k . "Val :" . $v;
    }
    ?>
   ```
7. What is the output of the following code  ?

    ```
    <?php

    $a = 'a';

    echo "$a";

    echo '$a';

    ?>
    ```
8. How will you declare a Constant in PHP ? Give an example ? What is
   magic constant in PHP ? Why its called magic constant ? Give some examples
   of magic constant.

9. Write a code in PHP to find all the whitespace and replace with 'S'.

10. What does the function `list()` do in PHP ?

-------

1. You are given a Matrix of m x n, Write code in php to find the row sum and column sum.
   Your programe should first generate the array, and find its column sum and row sum.
   Your code should work for any row and any columns.

                            Col Sum

            [1,  3,  2,  12] [18]
            [2,  0,  2,  11] [15]
            [1,  -1, 23, 32] [55]

RowSum:     [4,  2, 27,  55]

2. Write a function in PHP  language that prints the integers from 0 to 24 (including 24). Print n integers per line. You should pass  n as a parameter , For example if n is 5
printinLine( 5 ); print 5 numbers per line.

Output of the program should be

        1  2  3  4  5

        6  7  8  9  10

        11 12 13 14 15

        16 17 18 19 20

        21 22 23 24

3. Write PHP Code to extract domain name from an e-mail address string.

4. Write PHP Code to display all the ASCII Chars.

5. Write PHP Code to Sort the following records by age
    $records = array(
        array("name"=>"Bob","age"=>8,"colour"=>"red"),
        array("name"=>"Greg","age"=>12,"colour"=>"blue"),
        array("name"=>"Andy","age"=>5,"colour"=>"purple")
    );


    $sortedrecords = array(
        array("name"=>"Andy","age"=>5,"colour"=>"purple")
        array("name"=>"Bob","age"=>8,"colour"=>"red"),
        array("name"=>"Greg","age"=>12,"colour"=>"blue"),
    )

6. Given a URL like, write PHP Code to find all the components like
```
'https://www.google.co.in/search?q=foo+bar'
```

