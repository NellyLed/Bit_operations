Задача:написать функцию, которая обнуляет заданные биты целого числа, начиная с определенной позиции. Позицию, число и количество заданных бит в нем
определяет пользователь.Использовать только поразрядные операции
Функция mer:
Входные параметры функции:число а,нулевая битовая маска mask, N(позиция) и К (заданные биты).. Они представлены в двоичном виде с 
размерностью 32-х бит,целочисленные параметры N и K.
mask суммируется с числом 31, представленном в двоичном виде.Ей присваивается значение mask обнуленной на N позиций влево начиная с 
младших разрядов с помощью битовой операции ИЛИ |
Далее биты переменной а будут обнуляться, если биты в масках а и mask при умножении не будут стоять единицы. Так биты числа обнуляться,
начиная со старшего разряда и заканчивая младшим.
Цикл for идет в обратном порядке, начиная с 31-й позиции бита до К позиции. В зависимоссти от условия выводится 1 или 0. По условию 
если позиция переменной а равна 1, то на экран выводится единица,если нет, то ноль.