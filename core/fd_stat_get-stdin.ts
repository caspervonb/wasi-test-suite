import {
  errno,
  fd_fdstat_get,
  fdflags,
  fdstat,
  filetype,
  rights,
} from "wasi";

const st_buf = instantiate<fdstat>();
const err = fd_fdstat_get(0, st_buf);
assert(err == errno.SUCCESS);

assert(st_buf.filetype != filetype.BLOCK_DEVICE);
assert(st_buf.filetype != filetype.DIRECTORY);
assert(st_buf.filetype != filetype.SOCKET_DGRAM);
assert(st_buf.filetype != filetype.SYMBOLIC_LINK);

assert((st_buf.flags & fdflags.NONBLOCK) == 0);

assert((st_buf.rights_base & rights.FD_READ) == rights.FD_READ);
assert((st_buf.rights_base & rights.POLL_FD_READWRITE) == rights.POLL_FD_READWRITE);
