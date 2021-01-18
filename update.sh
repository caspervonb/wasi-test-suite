#!/usr/bin/env bash
set -e

for name in core libc libstd; do
  rm -rf "$name"
  rm -rf "wasi-$name-test"

  git clone "https://github.com/caspervonb/wasi-$name-test"

  cd "wasi-$name-test"
  bash build.sh $name
  mv out ../$name

  sha=$(git rev-parse --short HEAD)
  message="Update $name to $sha"
  cd ..

  git add -A $name/
  git commit --message "$message" || true
done
