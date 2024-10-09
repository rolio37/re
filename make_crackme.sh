#!/bin/sh

cc crackme_easy.c -o crackme_easy
cc crackme_xmm.c -o crackme_xmm
strip crackme_easy crackme_xmm

