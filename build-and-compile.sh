#! /bin/zsh

echo BUILDANDO PROJETO
cmake -S . -B dist/
cmake --build dist/
