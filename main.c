#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	char str[5027];
	strcpy(str, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin interdum mauris vel mi rutrum, ac scelerisque nulla fringilla. Nullam ullamcorper metus id tortor mattis, in tincidunt lorem volutpat. Quisque id nunc nisl. Duis vel blandit purus, at auctor metus. Suspendisse venenatis, mi non consectetur auctor, nunc lectus finibus justo, sit amet gravida risus orci nec odio. Fusce vestibulum, enim sit amet fringilla lobortis, urna justo fringilla justo, et tristique enim est vel nisi. Nulla eleifend mi id ullamcorper rhoncus. Integer venenatis, enim vel ullamcorper interdum, lorem quam consequat sem, eu varius eros nibh nec odio. Maecenas id luctus odio, nec suscipit tellus. Maecenas bibendum feugiat metus non scelerisque. Phasellus fermentum vitae nisl quis efficitur. Donec iaculis varius diam, id vehicula est venenatis quis. Proin euismod ac justo nec auctor zLorem ipsum dolor sit amet, consectetur adipiscing elit. Proin interdum mauris vel mi rutrum, ac scelerisque nulla fringilla. Nullam ullamcorper metus id tortor mattis, in tincidunt lorem volutpat. Quisque id nunc nisl. Duis vel blandit purus, at auctor metus. Suspendisse venenatis, mi non consectetur auctor, nunc lectus finibus justo, sit amet gravida risus orci nec odio. Fusce vestibulum, enim sit amet fringilla lobortis, urna justo fringilla justo, et tristique enim est vel nisi. Nulla eleifend mi id ullamcorper rhoncus. Integer venenatis, enim vel ullamcorper interdum, lorem quam consequat sem, eu varius eros nibh nec odio. Maecenas id luctus odio, nec suscipit tellus. Maecenas bibendum feugiat metus non scelerisque. Phasellus fermentum vitae nisl quis efficitur. Donec iaculis varius diam, id vehicula est venenatis quis. Proin euismod ac justo nec auctor.eus added some more.");
    len = _printf("%b\n", -1);
    _printf("%d\n", len);
    _printf("%s\n", str);
    return (0);
}
