use std::env;

fn main() {
  let vars = env::vars().collect::<Vec<(String, String)>>();
  assert_eq!(vars.len(), 1);
  assert_eq!(vars[0], ("HELLO".to_string(), "hello".to_string()));
}
