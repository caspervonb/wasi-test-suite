import {
  clock_res_get,
  clockid,
  errno,
} from "wasi";

const err = clock_res_get(clockid.THREAD_CPUTIME_ID, 0);
assert(err == errno.SUCCESS);

const res = load<u64>(0);
assert(res > 0);
