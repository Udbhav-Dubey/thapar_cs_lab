#!/bin/bash
read c
case $c in
    [aeiou]|[AEIOU])
        echo "vowel"
        ;;
    [a-z]|[A-Z])
        echo "consonant"
        ;;
esac
