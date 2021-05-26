#include<stdio.h>
#include<stdlib.h>
void main()
{
	system("set FLASK_APP=__init__");
	system("set FLASK_ENV=development");
	system("flask init-db");
	system("flask run");
}