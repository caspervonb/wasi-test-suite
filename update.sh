#!/usr/bin/env bash
set -e

for name in core libc libstd; do
  rm -rf "$name"
  git clone "https://github.com/caspervonb/wasi-$name-test" $name

  pushd $name
  sha=$(git rev-parse --short HEAD)
  message="Update $name to $sha"
  popd

  git add -A $name/
  git commit --message "$message" || true
done
