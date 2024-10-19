#!/bin/sh

cc crackme_easy.c -o crackme_easy
cc crackme_easy2.c -o crackme_easy2
cc crackme_xmm.c -o crackme_xmm
strip crackme_easy crackme_easy2 crackme_xmm 

