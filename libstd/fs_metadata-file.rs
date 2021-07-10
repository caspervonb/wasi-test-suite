use std::fs;

fn main() {
  let metadata = fs::metadata("fs_metadata-file/file").unwrap();
  assert!(metadata.is_file());
}