use std::fs;

fn main() {
  let old_path = "fs_rename-file.dir/old_file";
  let new_path = "fs_rename-file.dir/new_file";

  assert!(fs::rename(old_path, new_path).is_ok());
}
