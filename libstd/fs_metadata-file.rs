use std::fs;

fn main() {
  let metadata = fs::metadata("fs_metadata-file.dir/file").unwrap();
  assert!(metadata.is_file());
}