#!/bin/sh

set -e

cd "$(dirname "$0")/../.."

trap 'rm -f compile_commands.json.tmp' EXIT;

sed "s:\[\[WORKSPACE\]\]:$(pwd):g" build/script/compile_commands.json.template > compile_commands.json.tmp
mv compile_commands.json.tmp compile_commands.json
