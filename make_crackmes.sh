#!/bin/sh

cc crackme_easy.c -o re_crackmes/crackme_easy
cc crackme_easy2.c -o re_crackmes/crackme_easy2
cc crackme_easy3.c -o re_crackmes/crackme_easy3
cc crackme_xmm.c -o re_crackmes/crackme_xmm
strip re_crackmes/crackme_easy re_crackmes/crackme_easy2 re_crackmes/crackme_easy3 re_crackmes/crackme_xmm 

