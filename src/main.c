/*
** main.c for aimxhOS in /home/rannou_s/work/c/aimxOS
** 
** Made by sebastien rannou
** Login   <rannou_s@epitech.net>
** 
** Started on  Thu Nov 26 16:04:58 2009 sebastien rannou
** Last update Fri Dec  4 14:14:44 2009 sebastien rannou
*/

#include "klib.h"
#include "idt.h"
#include "gdt.h"
#include "isr.h"
#include "irq.h"
#include "splash.h"

void
kmain(void * mbd, unsigned int magic)
{

  if (magic == 0x2BADB002)
    {

      splash_screen();

      gdt_install();
      idt_install();      
      isr_install();
      irq_install();

      while (42)
        {
          continue;
        }
    }

}
