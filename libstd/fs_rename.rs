use std::fs;

fn main() {
  let old_path = "fs_rename.dir/old_file";
  let new_path = "fs_rename.dir/new_file";

  assert!(fs::rename(old_path, new_path).is_ok());
}
