  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * Pointer - This program shows how to use pointers in C
   */

#include <stdio.h>
#include <string.h>

int main()
{
	
	char str[] = "Hello";
	char* p;
	int I;
	
	p = &str[0];

	printf("Address : %u", p);

	for(I = 0; I < strlen(str); I++)
	{
		printf("\nValue at Address %u : %c", p+i, *(p+i));
	}

	printf("\n");

	for(I = 0; I<5; I++)
	{
		printf("\nValue  %c",  *p + I);
	}	
	
	return 0;
}

