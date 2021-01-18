import {
  errno,
  sched_yield,
} from "wasi";

assert(sched_yield() == errno.SUCCESS);
