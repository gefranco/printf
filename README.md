# _printf( );

Is a function that print formated text on screen.
# How to use it. - Example

Inside a program you need to call the function _printf();
```bash
/*For example inside you main file*/
/*You should to call the holberton.h library*/

#include "holberton.h"
int main();
{

char *string = "I am a string :)";
int num = 10;

_printf("This is a string %s.\n", string);

_printf("This is an integer %d. \n", num);
return (0);
}
```
# On screen
```
$./main.c | cat -e
This is a string I am a string :)$
This is an integer 10.$
$
```

## Usage and different flags

```flags
With this function you can write some types of variables

%c to prints chars types

%s to prints strings types

%d to prints decimals types

%i to prints integers

%% to print just a % sign
```

## Contributing
Pull requests are welcome.

This is a project for [Holberton School](https://www.holbertonschool.com) by Holberton Students.

If you found a bug, you can report us to our twitter accounts.

Please make sure to update tests as appropriate.

## Authors
[Germán Franco](https://twitter.com/gefrancof) - [Daniel Ramirez](https://twitter.com/gomba662)