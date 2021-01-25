use std::fs;

fn main() {
  fs::create_dir("fs_create_dir.dir/new_directory").expect("Unable to create directory");
}
