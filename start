#!/bin/bash

CHAVE=1

while [ $CHAVE != 0 ]
do
    echo 'Escolha uma opção:'
    echo '(1) Fibonacci Iterativo (2) Fibonacci recursivo (3) Sair'
    read OPCAO
    case $OPCAO in
        1)
            cd fibonacci_iterativo
            make
            make run
            make clean
            cd ..
            ;;
        2)
            cd fibonacci_recursivo
            make
            make run
            make clean
            cd ..
            ;;
        3)
            echo Saindo...
            CHAVE=0
            ;;
        *)
            echo Opção inválida.
            ;;
    esac
done
