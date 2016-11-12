#include "Functions.h"
#include "squirrel.h"

#define SQMD_SUCCESS 0
#define SQMD_FAILURE 1

extern HSQAPI sq;

// Function used to register integer constants into the squirrel virtual machine
void RegisterSquirrelConstInt(HSQUIRRELVM vm, const SQChar * name, SQInteger value, SQBool staticv = SQFalse)
{
	// Push the constant table on to the stack
	sq->pushconsttable(vm);
	// Push the name of the constant on to the stack
	sq->pushstring(vm, name, -1) ;
	// Push the value of the constant on to the stack
	sq->pushinteger(vm, value);
	// Create the new slot in the const table
	sq->newslot(vm, -3, staticv);
	// Pop the const table
	sq->poptop(vm);
}

void RegisterConstants(HSQUIRRELVM vm)
{
	// Register all the integer constants of the SQLite library
	RegisterSquirrelConstInt(vm, "SQLITE_ABORT", SQLITE_ABORT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ABORT_ROLLBACK", SQLITE_ABORT_ROLLBACK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ACCESS_EXISTS", SQLITE_ACCESS_EXISTS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ACCESS_READ", SQLITE_ACCESS_READ, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ACCESS_READWRITE", SQLITE_ACCESS_READWRITE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ALTER_TABLE", SQLITE_ALTER_TABLE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ANALYZE", SQLITE_ANALYZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ANY", SQLITE_ANY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ATTACH", SQLITE_ATTACH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_AUTH", SQLITE_AUTH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_AUTH_USER", SQLITE_AUTH_USER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_BLOB", SQLITE_BLOB, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_BUSY", SQLITE_BUSY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_BUSY_RECOVERY", SQLITE_BUSY_RECOVERY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_BUSY_SNAPSHOT", SQLITE_BUSY_SNAPSHOT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CANTOPEN", SQLITE_CANTOPEN, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CANTOPEN_CONVPATH", SQLITE_CANTOPEN_CONVPATH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CANTOPEN_FULLPATH", SQLITE_CANTOPEN_FULLPATH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CANTOPEN_ISDIR", SQLITE_CANTOPEN_ISDIR, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CANTOPEN_NOTEMPDIR", SQLITE_CANTOPEN_NOTEMPDIR, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CHECKPOINT_FULL", SQLITE_CHECKPOINT_FULL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CHECKPOINT_PASSIVE", SQLITE_CHECKPOINT_PASSIVE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CHECKPOINT_RESTART", SQLITE_CHECKPOINT_RESTART, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CHECKPOINT_TRUNCATE", SQLITE_CHECKPOINT_TRUNCATE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_COVERING_INDEX_SCAN", SQLITE_CONFIG_COVERING_INDEX_SCAN, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_GETMALLOC", SQLITE_CONFIG_GETMALLOC, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_GETMUTEX", SQLITE_CONFIG_GETMUTEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_GETPCACHE", SQLITE_CONFIG_GETPCACHE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_GETPCACHE2", SQLITE_CONFIG_GETPCACHE2, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_HEAP", SQLITE_CONFIG_HEAP, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_LOG", SQLITE_CONFIG_LOG, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_LOOKASIDE", SQLITE_CONFIG_LOOKASIDE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_MALLOC", SQLITE_CONFIG_MALLOC, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_MEMSTATUS", SQLITE_CONFIG_MEMSTATUS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_MMAP_SIZE", SQLITE_CONFIG_MMAP_SIZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_MULTITHREAD", SQLITE_CONFIG_MULTITHREAD, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_MUTEX", SQLITE_CONFIG_MUTEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_PAGECACHE", SQLITE_CONFIG_PAGECACHE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_PCACHE", SQLITE_CONFIG_PCACHE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_PCACHE2", SQLITE_CONFIG_PCACHE2, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_PCACHE_HDRSZ", SQLITE_CONFIG_PCACHE_HDRSZ, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_PMASZ", SQLITE_CONFIG_PMASZ, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_SCRATCH", SQLITE_CONFIG_SCRATCH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_SERIALIZED", SQLITE_CONFIG_SERIALIZED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_SINGLETHREAD", SQLITE_CONFIG_SINGLETHREAD, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_SQLLOG", SQLITE_CONFIG_SQLLOG, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_URI", SQLITE_CONFIG_URI, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONFIG_WIN32_HEAPSIZE", SQLITE_CONFIG_WIN32_HEAPSIZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT", SQLITE_CONSTRAINT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_CHECK", SQLITE_CONSTRAINT_CHECK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_COMMITHOOK", SQLITE_CONSTRAINT_COMMITHOOK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_FOREIGNKEY", SQLITE_CONSTRAINT_FOREIGNKEY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_FUNCTION", SQLITE_CONSTRAINT_FUNCTION, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_NOTNULL", SQLITE_CONSTRAINT_NOTNULL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_PRIMARYKEY", SQLITE_CONSTRAINT_PRIMARYKEY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_ROWID", SQLITE_CONSTRAINT_ROWID, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_TRIGGER", SQLITE_CONSTRAINT_TRIGGER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_UNIQUE", SQLITE_CONSTRAINT_UNIQUE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CONSTRAINT_VTAB", SQLITE_CONSTRAINT_VTAB, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_COPY", SQLITE_COPY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CORRUPT", SQLITE_CORRUPT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CORRUPT_VTAB", SQLITE_CORRUPT_VTAB, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CREATE_INDEX", SQLITE_CREATE_INDEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CREATE_TABLE", SQLITE_CREATE_TABLE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CREATE_TEMP_INDEX", SQLITE_CREATE_TEMP_INDEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CREATE_TEMP_TABLE", SQLITE_CREATE_TEMP_TABLE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CREATE_TEMP_TRIGGER", SQLITE_CREATE_TEMP_TRIGGER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CREATE_TEMP_VIEW", SQLITE_CREATE_TEMP_VIEW, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CREATE_TRIGGER", SQLITE_CREATE_TRIGGER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CREATE_VIEW", SQLITE_CREATE_VIEW, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_CREATE_VTABLE", SQLITE_CREATE_VTABLE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBCONFIG_ENABLE_FKEY", SQLITE_DBCONFIG_ENABLE_FKEY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBCONFIG_ENABLE_TRIGGER", SQLITE_DBCONFIG_ENABLE_TRIGGER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBCONFIG_LOOKASIDE", SQLITE_DBCONFIG_LOOKASIDE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_CACHE_HIT", SQLITE_DBSTATUS_CACHE_HIT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_CACHE_MISS", SQLITE_DBSTATUS_CACHE_MISS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_CACHE_USED", SQLITE_DBSTATUS_CACHE_USED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_CACHE_WRITE", SQLITE_DBSTATUS_CACHE_WRITE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_DEFERRED_FKS", SQLITE_DBSTATUS_DEFERRED_FKS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_LOOKASIDE_HIT", SQLITE_DBSTATUS_LOOKASIDE_HIT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL", SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE", SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_LOOKASIDE_USED", SQLITE_DBSTATUS_LOOKASIDE_USED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_MAX", SQLITE_DBSTATUS_MAX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_SCHEMA_USED", SQLITE_DBSTATUS_SCHEMA_USED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DBSTATUS_STMT_USED", SQLITE_DBSTATUS_STMT_USED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DELETE", SQLITE_DELETE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DENY", SQLITE_DENY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DETACH", SQLITE_DETACH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DETERMINISTIC", SQLITE_DETERMINISTIC, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DONE", SQLITE_DONE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DROP_INDEX", SQLITE_DROP_INDEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DROP_TABLE", SQLITE_DROP_TABLE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DROP_TEMP_INDEX", SQLITE_DROP_TEMP_INDEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DROP_TEMP_TABLE", SQLITE_DROP_TEMP_TABLE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DROP_TEMP_TRIGGER", SQLITE_DROP_TEMP_TRIGGER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DROP_TEMP_VIEW", SQLITE_DROP_TEMP_VIEW, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DROP_TRIGGER", SQLITE_DROP_TRIGGER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DROP_VIEW", SQLITE_DROP_VIEW, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_DROP_VTABLE", SQLITE_DROP_VTABLE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_EMPTY", SQLITE_EMPTY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ERROR", SQLITE_ERROR, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FAIL", SQLITE_FAIL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_BUSYHANDLER", SQLITE_FCNTL_BUSYHANDLER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_CHUNK_SIZE", SQLITE_FCNTL_CHUNK_SIZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_COMMIT_PHASETWO", SQLITE_FCNTL_COMMIT_PHASETWO, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_FILE_POINTER", SQLITE_FCNTL_FILE_POINTER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_HAS_MOVED", SQLITE_FCNTL_HAS_MOVED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_LOCKSTATE", SQLITE_FCNTL_LOCKSTATE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_MMAP_SIZE", SQLITE_FCNTL_MMAP_SIZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_OVERWRITE", SQLITE_FCNTL_OVERWRITE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_PERSIST_WAL", SQLITE_FCNTL_PERSIST_WAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_POWERSAFE_OVERWRITE", SQLITE_FCNTL_POWERSAFE_OVERWRITE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_PRAGMA", SQLITE_FCNTL_PRAGMA, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_SIZE_HINT", SQLITE_FCNTL_SIZE_HINT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_SYNC", SQLITE_FCNTL_SYNC, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_SYNC_OMITTED", SQLITE_FCNTL_SYNC_OMITTED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_TEMPFILENAME", SQLITE_FCNTL_TEMPFILENAME, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_TRACE", SQLITE_FCNTL_TRACE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_VFSNAME", SQLITE_FCNTL_VFSNAME, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_WIN32_AV_RETRY", SQLITE_FCNTL_WIN32_AV_RETRY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FCNTL_WIN32_SET_HANDLE", SQLITE_FCNTL_WIN32_SET_HANDLE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FLOAT", SQLITE_FLOAT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FORMAT", SQLITE_FORMAT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FULL", SQLITE_FULL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_FUNCTION", SQLITE_FUNCTION, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_GET_LOCKPROXYFILE", SQLITE_GET_LOCKPROXYFILE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IGNORE", SQLITE_IGNORE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INDEX_CONSTRAINT_EQ", SQLITE_INDEX_CONSTRAINT_EQ, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INDEX_CONSTRAINT_GE", SQLITE_INDEX_CONSTRAINT_GE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INDEX_CONSTRAINT_GT", SQLITE_INDEX_CONSTRAINT_GT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INDEX_CONSTRAINT_LE", SQLITE_INDEX_CONSTRAINT_LE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INDEX_CONSTRAINT_LT", SQLITE_INDEX_CONSTRAINT_LT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INDEX_CONSTRAINT_MATCH", SQLITE_INDEX_CONSTRAINT_MATCH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INSERT", SQLITE_INSERT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INTEGER", SQLITE_INTEGER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INTERNAL", SQLITE_INTERNAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_INTERRUPT", SQLITE_INTERRUPT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_ATOMIC", SQLITE_IOCAP_ATOMIC, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_ATOMIC16K", SQLITE_IOCAP_ATOMIC16K, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_ATOMIC1K", SQLITE_IOCAP_ATOMIC1K, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_ATOMIC2K", SQLITE_IOCAP_ATOMIC2K, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_ATOMIC32K", SQLITE_IOCAP_ATOMIC32K, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_ATOMIC4K", SQLITE_IOCAP_ATOMIC4K, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_ATOMIC512", SQLITE_IOCAP_ATOMIC512, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_ATOMIC64K", SQLITE_IOCAP_ATOMIC64K, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_ATOMIC8K", SQLITE_IOCAP_ATOMIC8K, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_IMMUTABLE", SQLITE_IOCAP_IMMUTABLE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_POWERSAFE_OVERWRITE", SQLITE_IOCAP_POWERSAFE_OVERWRITE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_SAFE_APPEND", SQLITE_IOCAP_SAFE_APPEND, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_SEQUENTIAL", SQLITE_IOCAP_SEQUENTIAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN", SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR", SQLITE_IOERR, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_ACCESS", SQLITE_IOERR_ACCESS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_BLOCKED", SQLITE_IOERR_BLOCKED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_CHECKRESERVEDLOCK", SQLITE_IOERR_CHECKRESERVEDLOCK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_CLOSE", SQLITE_IOERR_CLOSE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_CONVPATH", SQLITE_IOERR_CONVPATH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_DELETE", SQLITE_IOERR_DELETE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_DELETE_NOENT", SQLITE_IOERR_DELETE_NOENT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_DIR_CLOSE", SQLITE_IOERR_DIR_CLOSE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_DIR_FSYNC", SQLITE_IOERR_DIR_FSYNC, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_FSTAT", SQLITE_IOERR_FSTAT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_FSYNC", SQLITE_IOERR_FSYNC, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_GETTEMPPATH", SQLITE_IOERR_GETTEMPPATH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_LOCK", SQLITE_IOERR_LOCK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_MMAP", SQLITE_IOERR_MMAP, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_NOMEM", SQLITE_IOERR_NOMEM, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_RDLOCK", SQLITE_IOERR_RDLOCK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_READ", SQLITE_IOERR_READ, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_SEEK", SQLITE_IOERR_SEEK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_SHMLOCK", SQLITE_IOERR_SHMLOCK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_SHMMAP", SQLITE_IOERR_SHMMAP, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_SHMOPEN", SQLITE_IOERR_SHMOPEN, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_SHMSIZE", SQLITE_IOERR_SHMSIZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_SHORT_READ", SQLITE_IOERR_SHORT_READ, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_TRUNCATE", SQLITE_IOERR_TRUNCATE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_UNLOCK", SQLITE_IOERR_UNLOCK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_IOERR_WRITE", SQLITE_IOERR_WRITE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LAST_ERRNO", SQLITE_LAST_ERRNO, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_ATTACHED", SQLITE_LIMIT_ATTACHED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_COLUMN", SQLITE_LIMIT_COLUMN, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_COMPOUND_SELECT", SQLITE_LIMIT_COMPOUND_SELECT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_EXPR_DEPTH", SQLITE_LIMIT_EXPR_DEPTH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_FUNCTION_ARG", SQLITE_LIMIT_FUNCTION_ARG, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_LENGTH", SQLITE_LIMIT_LENGTH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_LIKE_PATTERN_LENGTH", SQLITE_LIMIT_LIKE_PATTERN_LENGTH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_SQL_LENGTH", SQLITE_LIMIT_SQL_LENGTH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_TRIGGER_DEPTH", SQLITE_LIMIT_TRIGGER_DEPTH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_VARIABLE_NUMBER", SQLITE_LIMIT_VARIABLE_NUMBER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_VDBE_OP", SQLITE_LIMIT_VDBE_OP, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LIMIT_WORKER_THREADS", SQLITE_LIMIT_WORKER_THREADS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LOCKED", SQLITE_LOCKED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LOCKED_SHAREDCACHE", SQLITE_LOCKED_SHAREDCACHE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LOCK_EXCLUSIVE", SQLITE_LOCK_EXCLUSIVE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LOCK_NONE", SQLITE_LOCK_NONE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LOCK_PENDING", SQLITE_LOCK_PENDING, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LOCK_RESERVED", SQLITE_LOCK_RESERVED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_LOCK_SHARED", SQLITE_LOCK_SHARED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MISMATCH", SQLITE_MISMATCH, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MISUSE", SQLITE_MISUSE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_FAST", SQLITE_MUTEX_FAST, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_RECURSIVE", SQLITE_MUTEX_RECURSIVE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_APP1", SQLITE_MUTEX_STATIC_APP1, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_APP2", SQLITE_MUTEX_STATIC_APP2, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_APP3", SQLITE_MUTEX_STATIC_APP3, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_LRU", SQLITE_MUTEX_STATIC_LRU, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_LRU2", SQLITE_MUTEX_STATIC_LRU2, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_MASTER", SQLITE_MUTEX_STATIC_MASTER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_MEM", SQLITE_MUTEX_STATIC_MEM, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_MEM2", SQLITE_MUTEX_STATIC_MEM2, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_OPEN", SQLITE_MUTEX_STATIC_OPEN, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_PMEM", SQLITE_MUTEX_STATIC_PMEM, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_MUTEX_STATIC_PRNG", SQLITE_MUTEX_STATIC_PRNG, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_NOLFS", SQLITE_NOLFS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_NOMEM", SQLITE_NOMEM, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_NOTADB", SQLITE_NOTADB, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_NOTFOUND", SQLITE_NOTFOUND, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_NOTICE", SQLITE_NOTICE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_NOTICE_RECOVER_ROLLBACK", SQLITE_NOTICE_RECOVER_ROLLBACK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_NOTICE_RECOVER_WAL", SQLITE_NOTICE_RECOVER_WAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_NULL", SQLITE_NULL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OK", SQLITE_OK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_AUTOPROXY", SQLITE_OPEN_AUTOPROXY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_CREATE", SQLITE_OPEN_CREATE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_DELETEONCLOSE", SQLITE_OPEN_DELETEONCLOSE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_EXCLUSIVE", SQLITE_OPEN_EXCLUSIVE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_FULLMUTEX", SQLITE_OPEN_FULLMUTEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_MAIN_DB", SQLITE_OPEN_MAIN_DB, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_MAIN_JOURNAL", SQLITE_OPEN_MAIN_JOURNAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_MASTER_JOURNAL", SQLITE_OPEN_MASTER_JOURNAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_MEMORY", SQLITE_OPEN_MEMORY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_NOMUTEX", SQLITE_OPEN_NOMUTEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_PRIVATECACHE", SQLITE_OPEN_PRIVATECACHE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_READONLY", SQLITE_OPEN_READONLY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_READWRITE", SQLITE_OPEN_READWRITE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_SHAREDCACHE", SQLITE_OPEN_SHAREDCACHE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_SUBJOURNAL", SQLITE_OPEN_SUBJOURNAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_TEMP_DB", SQLITE_OPEN_TEMP_DB, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_TEMP_JOURNAL", SQLITE_OPEN_TEMP_JOURNAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_TRANSIENT_DB", SQLITE_OPEN_TRANSIENT_DB, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_URI", SQLITE_OPEN_URI, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_OPEN_WAL", SQLITE_OPEN_WAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_PERM", SQLITE_PERM, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_PRAGMA", SQLITE_PRAGMA, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_PROTOCOL", SQLITE_PROTOCOL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_RANGE", SQLITE_RANGE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_READ", SQLITE_READ, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_READONLY", SQLITE_READONLY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_READONLY_CANTLOCK", SQLITE_READONLY_CANTLOCK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_READONLY_DBMOVED", SQLITE_READONLY_DBMOVED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_READONLY_RECOVERY", SQLITE_READONLY_RECOVERY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_READONLY_ROLLBACK", SQLITE_READONLY_ROLLBACK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_RECURSIVE", SQLITE_RECURSIVE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_REINDEX", SQLITE_REINDEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_REPLACE", SQLITE_REPLACE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ROLLBACK", SQLITE_ROLLBACK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_ROW", SQLITE_ROW, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SAVEPOINT", SQLITE_SAVEPOINT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SCANSTAT_EST", SQLITE_SCANSTAT_EST, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SCANSTAT_EXPLAIN", SQLITE_SCANSTAT_EXPLAIN, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SCANSTAT_NAME", SQLITE_SCANSTAT_NAME, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SCANSTAT_NLOOP", SQLITE_SCANSTAT_NLOOP, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SCANSTAT_NVISIT", SQLITE_SCANSTAT_NVISIT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SCANSTAT_SELECTID", SQLITE_SCANSTAT_SELECTID, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SCHEMA", SQLITE_SCHEMA, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SELECT", SQLITE_SELECT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SET_LOCKPROXYFILE", SQLITE_SET_LOCKPROXYFILE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SHM_EXCLUSIVE", SQLITE_SHM_EXCLUSIVE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SHM_LOCK", SQLITE_SHM_LOCK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SHM_NLOCK", SQLITE_SHM_NLOCK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SHM_SHARED", SQLITE_SHM_SHARED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SHM_UNLOCK", SQLITE_SHM_UNLOCK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_MALLOC_COUNT", SQLITE_STATUS_MALLOC_COUNT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_MALLOC_SIZE", SQLITE_STATUS_MALLOC_SIZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_MEMORY_USED", SQLITE_STATUS_MEMORY_USED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_PAGECACHE_OVERFLOW", SQLITE_STATUS_PAGECACHE_OVERFLOW, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_PAGECACHE_SIZE", SQLITE_STATUS_PAGECACHE_SIZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_PAGECACHE_USED", SQLITE_STATUS_PAGECACHE_USED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_PARSER_STACK", SQLITE_STATUS_PARSER_STACK, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_SCRATCH_OVERFLOW", SQLITE_STATUS_SCRATCH_OVERFLOW, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_SCRATCH_SIZE", SQLITE_STATUS_SCRATCH_SIZE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STATUS_SCRATCH_USED", SQLITE_STATUS_SCRATCH_USED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STMTSTATUS_AUTOINDEX", SQLITE_STMTSTATUS_AUTOINDEX, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STMTSTATUS_FULLSCAN_STEP", SQLITE_STMTSTATUS_FULLSCAN_STEP, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STMTSTATUS_SORT", SQLITE_STMTSTATUS_SORT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_STMTSTATUS_VM_STEP", SQLITE_STMTSTATUS_VM_STEP, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SYNC_DATAONLY", SQLITE_SYNC_DATAONLY, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SYNC_FULL", SQLITE_SYNC_FULL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_SYNC_NORMAL", SQLITE_SYNC_NORMAL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_ALWAYS", SQLITE_TESTCTRL_ALWAYS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_ASSERT", SQLITE_TESTCTRL_ASSERT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS", SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_BITVEC_TEST", SQLITE_TESTCTRL_BITVEC_TEST, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_BYTEORDER", SQLITE_TESTCTRL_BYTEORDER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_EXPLAIN_STMT", SQLITE_TESTCTRL_EXPLAIN_STMT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_FAULT_INSTALL", SQLITE_TESTCTRL_FAULT_INSTALL, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_FIRST", SQLITE_TESTCTRL_FIRST, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_ISINIT", SQLITE_TESTCTRL_ISINIT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_ISKEYWORD", SQLITE_TESTCTRL_ISKEYWORD, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_LAST", SQLITE_TESTCTRL_LAST, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_LOCALTIME_FAULT", SQLITE_TESTCTRL_LOCALTIME_FAULT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_NEVER_CORRUPT", SQLITE_TESTCTRL_NEVER_CORRUPT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_OPTIMIZATIONS", SQLITE_TESTCTRL_OPTIMIZATIONS, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_PENDING_BYTE", SQLITE_TESTCTRL_PENDING_BYTE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_PRNG_RESET", SQLITE_TESTCTRL_PRNG_RESET, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_PRNG_RESTORE", SQLITE_TESTCTRL_PRNG_RESTORE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_PRNG_SAVE", SQLITE_TESTCTRL_PRNG_SAVE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_RESERVE", SQLITE_TESTCTRL_RESERVE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_SCRATCHMALLOC", SQLITE_TESTCTRL_SCRATCHMALLOC, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_SORTER_MMAP", SQLITE_TESTCTRL_SORTER_MMAP, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TESTCTRL_VDBE_COVERAGE", SQLITE_TESTCTRL_VDBE_COVERAGE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TEXT", SQLITE_TEXT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TOOBIG", SQLITE_TOOBIG, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_TRANSACTION", SQLITE_TRANSACTION, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_UPDATE", SQLITE_UPDATE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_UTF16", SQLITE_UTF16, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_UTF16BE", SQLITE_UTF16BE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_UTF16LE", SQLITE_UTF16LE, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_UTF16_ALIGNED", SQLITE_UTF16_ALIGNED, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_UTF8", SQLITE_UTF8, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_VERSION_NUMBER", SQLITE_VERSION_NUMBER, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_VTAB_CONSTRAINT_SUPPORT", SQLITE_VTAB_CONSTRAINT_SUPPORT, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_WARNING", SQLITE_WARNING, SQFalse);
	RegisterSquirrelConstInt(vm, "SQLITE_WARNING_AUTOINDEX", SQLITE_WARNING_AUTOINDEX, SQFalse);
}

// Function used to register native functions into the squirrel virtual machine
SQInteger RegisterSquirrelFunc(HSQUIRRELVM vm, SQFUNCTION pointer, const SQChar * name, unsigned char params, const SQChar * mask)
{
	// Create a new fixed size string to hold the new parameter mask
	SQChar new_params[32];
	// Push the root table to specify in which table we register the function
	sq->pushroottable(vm);
	// Push the name of the function
	sq->pushstring(vm, name, -1);
	// Push the function pointer
	sq->newclosure(vm, pointer, 0);
	// Parse the function parameters if any
	if (params > 0)
	{
		// Compensate for the root table
		params++;
		// Format the parameter
		sprintf(new_params, "t%s", mask);
		// Add a parameter type check
		sq->setparamscheck(v, params, new_params);
	}
	// Create the function
	sq->setnativeclosurename(vm, -1, name);
	sq->newslot(vm, -3, SQFalse);
	// Pop the root table
	sq->pop(vm, 1);

	return 0;
}

SQRESULT FetchDatabaseHandle(HSQUIRRELVM vm, SQInteger pos, sqlite3 *& dhandle, const SQChar *& msg)
{
	// Make sure that the specified argument exists
	if (sq->gettop(vm) < pos) {
		msg = _SC("Unable to locate any database handle in the specified argument");
		return SQMD_FAILURE;
	// Make sure that the specified argument is valid
	} else if (sq->gettype(vm, pos) != OT_USERPOINTER) {
		msg = _SC("Unable to locate any valid database handle in the specified argument");
		return SQMD_FAILURE;
	}

	// Attempt to retrieve the user pointer from the stack
	if (SQ_FAILED(sq->getuserpointer(vm, pos, (SQUserPointer *)&dhandle))) {
		msg = _SC("Unable to retrieve a the database handle from the specified argument");
		return SQMD_FAILURE;
	// See if a valid pointer could be retrieved
	} else if (dhandle == NULL) {
		msg = _SC("Unable to retrieve a valid database handle from the specified argument");
		return SQMD_FAILURE;
	}

	// At this point everything went as it should
	return SQMD_SUCCESS;
}

SQRESULT FetchStatementHandle(HSQUIRRELVM vm, SQInteger pos, sqlite3_stmt *& shandle, const SQChar *& msg)
{
	// Make sure that the specified argument exists
	if (sq->gettop(vm) < pos) {
		msg = _SC("Unable to locate any statement handle in the specified argument");
		return SQMD_FAILURE;
	// Make sure that the specified argument is valid
	} else if (sq->gettype(vm, pos) != OT_USERPOINTER) {
		msg = _SC("Unable to locate any valid statement handle in the specified argument");
		return SQMD_FAILURE;
	}

	// Attempt to retrieve the user pointer from the stack
	if (SQ_FAILED(sq->getuserpointer(vm, pos, (SQUserPointer *)&shandle))) {
		msg = _SC("Unable to retrieve a the statement handle from the specified argument");
		return SQMD_FAILURE;
	// See if a valid pointer could be retrieved
	} else if (shandle == NULL) {
		msg = _SC("Unable to retrieve a valid statement handle from the specified argument");
		return SQMD_FAILURE;
	}

	// At this point everything went as it should
	return SQMD_SUCCESS;
}

SQInteger SQLite_Open(HSQUIRRELVM vm)
{
	// Get the number of arguments given to the function call
	SQInteger argc = sq->gettop(vm);
	
	// Initialize the default values required to open a database
	SQInteger flags = SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE;
	const SQChar * path = NULL;
	const SQChar * vfs = NULL;

	// Make sure that at least the path argument was specified
	if (argc < 2) {
		return sq->throwerror(vm, "Function needs at least the file path argument");
	} else if (sq->gettype(vm, 2) != OT_STRING) {
		return sq->throwerror(vm, "Function needs the first argument to be string");
	} else if (SQ_FAILED(sq->getstring(vm, 2, &path))) {
		return sq->throwerror(vm, "Unable to retrieve any value from the first argument");
	} else if (path == NULL || strlen(path) < 1) {
		return sq->throwerror(vm, "Unable to retrieve a valid value from the first argument");
	}

	// See if the flags argument was specified as well
	if (argc > 2) {
		if (sq->gettype(vm, 3) == OT_INTEGER && SQ_FAILED(sq->getinteger(vm, 3, &flags))) {
			return sq->throwerror(vm, "Uas unable to retrieve the second specified argument");
		} else if (sq->gettype(vm, 3) == OT_NULL) {
			// Ignore the value
		} else {
			return sq->throwerror(vm, "Function needs the second argument to be integer or null");
		}
	}

	// See if the vfs argument was specified as well
	if (argc > 3) {
		if (sq->gettype(vm, 4) == OT_STRING && SQ_FAILED(sq->getstring(vm, 4, &vfs))) {
			return sq->throwerror(vm, "Unable to retrieve the third specified argument");
		} else if (sq->gettype(vm, 4) == OT_NULL) {
			// Ignore the value
		} else {
			return sq->throwerror(vm, "Function needs the third argument to be string or null");
		}
	}

	// Temporary variable until the connection is established
	sqlite3 * dhandle;
	// Attempt to open a connection to the specified database
	int ret = sqlite3_open_v2(static_cast<const char*>(path), &dhandle, static_cast<int>(flags), static_cast<const char*>(vfs));

	// Look for errors in the previous procedure
	if (ret != SQLITE_OK) {
		// Retrieve the error message from the database handle
		const char * msg = sqlite3_errmsg(dhandle);
		// Forward the error message into the virtual machine
		SQRESULT res = sq->throwerror(vm, msg);
		// Closing is required even if the database failed to open
		sqlite3_close(dhandle);
		// Return the value returned by the previous exception
		return res;
	}
	
	// Push the connection handle on the stack
	sq->pushuserpointer(vm, dhandle);
	// Specify that we have value returned on the stack
	return 1;
}

SQInteger SQLite_Exec(HSQUIRRELVM vm)
{
	// Verify that the number of passed arguments is correct
	if (sq->gettop(vm) < 3) {
		return sq->throwerror(vm, "Function needs at least the database handle and the query string");
	} else if (sq->gettype(vm, 3) != OT_STRING) {
		return sq->throwerror(vm, "Function needs the second argument to be a string");
	}

	// Temporary variables for the retrieved database handle
	sqlite3 * dhandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchDatabaseHandle(vm, 2, dhandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Temporary variable for the retrieved query string
	const SQChar * query = NULL;

	// Attempt to get the query string from the stack
	if (SQ_FAILED(sq->getstring(vm, 3, &query))) {
		return sq->throwerror(vm, "Unable to retrieve any value from the second argument");
	// See if the query string could be successfully retrieved
	} else if (query == NULL || strlen(query) < 1) {
		return sq->throwerror(vm, "Unable to retrieve a valid value from the second argument");
	}

	// Attempt to executed the specified query
	int ret = sqlite3_exec(dhandle, static_cast<const char*>(query), NULL, NULL, NULL);

	// See if the query could be executed successfully
	if (ret != SQLITE_OK) {
		// Retrieve the error message from the database handle
		msg = static_cast<const SQChar *>(sqlite3_errmsg(dhandle));
		// Forward the error to the virtual machine
		return sq->throwerror(vm, msg);
	}

	// Specify that the query could be executed successfully
	sq->pushbool(vm, SQTrue);

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_Query(HSQUIRRELVM vm)
{
	if (sq->gettop(vm) < 3) {
		return sq->throwerror(vm, "Function needs at least the database handle and the query string");
	} else if (sq->gettype(vm, 3) != OT_STRING) {
		return sq->throwerror(vm, "Function needs the second argument to be a string");
	}

	// Temporary variables for the retrieved database handle
	sqlite3 * dhandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchDatabaseHandle(vm, 2, dhandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Temporary variable for the retrieved query string
	const SQChar * query;
	
	// Attempt to get the query string from the stack
	if (SQ_FAILED(sq->getstring(vm, 3, &query))) {
		return sq->throwerror(vm, "Unable to retrieve any value from the second argument");
	// See if the query string could be successfully retrieved
	} else if (query == NULL || strlen(query) < 1) {
		return sq->throwerror(vm, "Unable to retrieve a valid value from the second argument");
	}

	// Allocate memory to hold the addresss of our statement
	sqlite3_stmt * shandle;

	// Attempt to compile the specified query
	int ret = sqlite3_prepare_v2(dhandle, static_cast<const char *>(query), -1, &shandle, NULL);

	// See if the query could be compiled
	if (ret != SQLITE_OK) {
		// Retrieve the error message from the statement handle and allow it to clean up
		return sq->throwerror(vm, static_cast<const SQChar *>(sqlite3_errstr(sqlite3_finalize(shandle))));
	}

	// Attempt to step the resulted statement
	ret = sqlite3_step(shandle);
	// See if the result has any valid data
	if(ret == SQLITE_ROW) {
		// Push the pointer of the statement on the stack
		sq->pushuserpointer(vm, &(*shandle));
		// Specify that we have a value on the stack that we returned
		return 1;
	} else {
		// Allow the handle to clean up
		ret = sqlite3_finalize(shandle);
		// Push a null value on the stack
		sq->pushnull(vm);
	}

	// Retrieve the error message from the database handle if any
	return (ret != SQLITE_OK) ? sq->throwerror(vm, static_cast<const SQChar *>(sqlite3_errstr(ret))) : 1;
}

SQInteger SQLite_Close(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the database handle argument");
	}

	// Temporary variables for the retrieved database handle
	sqlite3 * dhandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchDatabaseHandle(vm, 2, dhandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Attempt to close the retrieved database handle
	int ret = sqlite3_close(dhandle);

	// See if the database could be closed successfully
	if (ret != SQLITE_OK) {
		// Retrieve and throw the error message from the database handle
		return sq->throwerror(vm, sqlite3_errmsg(dhandle));
	}

	// Clear any remaining values
	dhandle = NULL;

	// Specify that the handle was closed successfully
	sq->pushbool(vm, SQTrue);

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ErrCode(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the database handle argument");
	}

	// Temporary variables for the retrieved database handle
	sqlite3 * dhandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchDatabaseHandle(vm, 2, dhandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Retrieve and return the error code from the database handle
	sq->pushinteger(vm, sqlite3_errcode(dhandle));

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ExtendedErrCode(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the database handle argument");
	}

	// Temporary variables for the retrieved database handle
	sqlite3 * dhandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchDatabaseHandle(vm, 2, dhandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Retrieve and return the extended error code from the database handle
	sq->pushinteger(vm, sqlite3_extended_errcode(dhandle));

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ErrMsg(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the database handle argument");
	}

	// Temporary variables for the retrieved database handle
	sqlite3 * dhandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchDatabaseHandle(vm, 2, dhandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Retrieve the error message from the database handle and push it on the stack
	sq->pushstring(vm, static_cast<const SQChar *>(sqlite3_errmsg(dhandle)), -1);

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ErrStr(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the error code argument");
	}

	// See if the specified argument is an integer
	if (sq->gettype(vm, 2) != OT_INTEGER) {
		return sq->throwerror(vm, "Function needs the first argument to be integer");
	}

	// Temporary variable for the retrieved error code
	SQInteger errcode;

	// Now retrieve the error code from the specified arguments
	if (SQ_FAILED(sq->getinteger(vm, 2, &errcode))) {
		return sq->throwerror(vm, "Unable to retrieve a value from the second argument");
	}

	// Retrieve and return the error message associated with this error code
	sq->pushstring(vm, static_cast<const SQChar *>(sqlite3_errstr(static_cast<int>(errcode))), -1);

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ToggleExtendedErrCode(HSQUIRRELVM vm)
{
	// Temporary variables for the retrieved database handle
	sqlite3 * dhandle;
	const SQChar * msg = NULL;

	// See if any argument was given to the function call
	if (sq->gettop(vm) < 3) {
		return sq->throwerror(vm, "Function needs at least the database handle and toggle argument");
	}

	// Now retrieve the database handle from the specified arguments
	if (FetchDatabaseHandle(vm, 2, dhandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Temporary variable for the retrieved boolean value
	SQBool toggle;
	// Attempt to retrieve the boolean value from the stack
	if (SQ_FAILED(sq->getbool(vm, 3, &toggle))) {
		return sq->throwerror(vm, "Unable to retrieve a boolean value from the second argument");
	}

	// Apply the specified setting
	sqlite3_extended_result_codes(dhandle, toggle == SQTrue ? 1 : 0);

	// Return the final retrieved value
	sq->pushbool(vm, toggle);

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_NextRow(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the statement handle argument");
	}

	// Temporary variable for the retrieved statement handle
	sqlite3_stmt * shandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchStatementHandle(vm, 2, shandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Advance to the next row in the result set
	switch(sqlite3_step(shandle))
	{
		case SQLITE_BUSY:
			return sq->throwerror(vm, _SC("Unable to fetch the next row because the database is busy"));
		case SQLITE_DONE:
			sq->pushbool(vm, SQFalse);
		break;
		case SQLITE_ROW:
			sq->pushbool(vm, SQTrue);
		break;
		case SQLITE_MISUSE:
			return sq->throwerror(vm, _SC("Unable to fetch the next row due to the statement missuse"));
		default:
			return sq->throwerror(vm, _SC("Unable to advance to the next row in the specified result set"));
	}

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ColumnData(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 3) {
		return sq->throwerror(vm, "Function needs at least the statement handle and the column index argument");
	}

	// Temporary variable for the retrieved statement handle
	sqlite3_stmt * shandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchStatementHandle(vm, 2, shandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Temporary variable for the retrieved column index
	SQInteger column;

	// Attempt to retrieve the column index from the stack
	if (SQ_FAILED(sq->getinteger(vm, 3, &column))) {
		return sq->throwerror(vm, "Unable to retrieve a value from the second argument");
	// See if the specified column index is valid
	} else if(column < 0) {
		return sq->throwerror(vm, "Invalid column index was specified");
	}

	// Attempt to retrieve the value from the result set
	switch(sqlite3_column_type(shandle, static_cast<int>(column)))
	{
		case SQLITE_INTEGER:
			sq->pushinteger(vm, (SQInteger)sqlite3_column_int(shandle, static_cast<int>(column)));
		break;
		case SQLITE_FLOAT:
			sq->pushfloat(vm, (SQFloat)sqlite3_column_double(shandle, static_cast<int>(column)));
		break;
		case SQLITE_TEXT:
		case SQLITE_BLOB:
			sq->pushstring(vm, (SQChar *)sqlite3_column_text(shandle, static_cast<int>(column)), -1);
		break;
		default: sq->pushnull(vm);
	}

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ColumnCount(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the statement handle argument");
	}

	// Temporary variable for the retrieved statement handle
	sqlite3_stmt * shandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchStatementHandle(vm, 2, shandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Retrieve the number of columns and push it on to the stack
	sq->pushinteger(vm, sqlite3_column_count(shandle));

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ColumnName(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 3) {
		return sq->throwerror(vm, "Function needs at least the statement handle and the column index argument");
	}

	// Temporary variable for the retrieved statement handle
	sqlite3_stmt * shandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchStatementHandle(vm, 2, shandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Temporary variable for the retrieved column index
	SQInteger column;

	// Attempt to retrieve the column index from the stack
	if (SQ_FAILED(sq->getinteger(vm, 3, &column ))) {
		return sq->throwerror(vm, "Unable to retrieve a value from the second argument");
	// See if the specified column index is valid
	} if(column < 0) {
		return sq->throwerror(vm, "Invalid column index was specified");
	}

	// Retrieve the column name and push it on the stack
	sq->pushstring(vm, sqlite3_column_name(shandle, static_cast<int>(column)), -1);

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ColumnDecltype(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 3) {
		return sq->throwerror(vm, "Function needs at least the statement handle and the column index argument");
	}

	// Temporary variable for the retrieved statement handle
	sqlite3_stmt * shandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchStatementHandle(vm, 2, shandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Temporary variable for the retrieved column index
	SQInteger column;

	// Attempt to retrieve the column index from the stack
	if (SQ_FAILED(sq->getinteger(vm, 3, &column))) {
		return sq->throwerror(vm, "Unable to retrieve a value from the second argument");
	// See if the specified column index is valid
	} else if(column < 0) {
		return sq->throwerror(vm, "Invalid column index was specified");
	}

	// Retrieve the column declaration type and push it on the stack
	sq->pushstring(vm, sqlite3_column_decltype(shandle, static_cast<int>(column)), -1);

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_ColumnBytes(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 3) {
		return sq->throwerror(vm, "Function needs at least the statement handle and the column index argument");
	}

	// Temporary variable for the retrieved statement handle
	sqlite3_stmt * shandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchStatementHandle(vm, 2, shandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Temporary variable for the retrieved column index
	SQInteger column;

	// Attempt to retrieve the column index from the stack
	if (SQ_FAILED(sq->getinteger(vm, 3, &column))) {
		return sq->throwerror(vm, "Unable to retrieve a value from the second argument");
	// See if the specified column index is valid
	} else if(column < 0) {
		return sq->throwerror(vm, "Invalid column index was specified");
	}

	// Retrieve the column bytes and push it on the stack
	sq->pushinteger(vm, sqlite3_column_bytes(shandle, static_cast<int>(column)));

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_Reset(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the statement handle argument");
	}

	// Temporary variable for the retrieved statement handle
	sqlite3_stmt * shandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchStatementHandle(vm, 2, shandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Attempt to reset the specified handle
	if (sqlite3_reset(shandle) != SQLITE_OK) {
		return sq->throwerror(vm, "Unable to reset the specified result handle");
	}

	// Attempt to step the specified statement
	int ret = sqlite3_step(shandle);

	// See if the result has any valid data
	if(ret == SQLITE_ROW) {
		// Specify that the result is good
		sq->pushbool(vm, SQTrue);
	} else {
		// Specify that the result is bad
		sq->pushbool(vm, SQFalse);
	}

	// Specify that we have a value on the stack that we returned
	return 1;
}

SQInteger SQLite_Release(HSQUIRRELVM vm)
{
	// See if any argument was given to the function call
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the statement handle argument");
	}

	// Temporary variable for the retrieved statement handle
	sqlite3_stmt * shandle;
	const SQChar * msg = NULL;

	// Now retrieve the database handle from the specified arguments
	if (FetchStatementHandle(vm, 2, shandle, msg) != SQMD_SUCCESS) {
		return sq->throwerror(vm, msg);
	}

	// Allow sqlite to clean up
	int ret = sqlite3_finalize(shandle);

	// Attempt to reset the specified handle
	if (ret != SQLITE_OK) {
		return sq->throwerror(vm, sqlite3_errstr(ret));
	}

	// Specify that we don't have a value on the stack that we returned
	return 0;
}

SQInteger SQLite_Escape(HSQUIRRELVM vm)
{
	// Verify that the number of passed arguments is correct
	if (sq->gettop(vm) < 2) {
		return sq->throwerror(vm, "Function needs at least the unescaped string");
	} else if (sq->gettype(vm, 2) != OT_STRING) {
		return sq->throwerror(vm, "Function needs the first argument to be a string");
	}

	// Temporary variable for the retrieved unsecaped string
	const SQChar * ustr = NULL;

	// Attempt to get the unescaped string from the stack
	if (SQ_FAILED(sq->getstring(vm, 2, &ustr))) {
		return sq->throwerror(vm, "Unable to retrieve any value from the first argument");
	// See if the unescaped string could be successfully retrieved
	} else if (ustr == NULL || strlen(ustr) < 1) {
		return sq->throwerror(vm, "Unable to retrieve a valid value from the first argument");
	}

	// Attempt to escape the specified string
	char * estr = sqlite3_mprintf("%q", static_cast<const char*>(ustr));

	// See if the string could be escaped successfully
	if (estr != NULL) {
		// Specify that the query could be executed successfully
		sq->pushstring(vm, static_cast<SQChar *>(estr), -1);

		// Specify that we have a value on the stack that we returned
		return 1;
	}

	// Forward the error to the virtual machine
	return sq->throwerror(vm, _SC("Unable to escape the specified string"));
}

void RegisterFuncs(HSQUIRRELVM vm)
{
	RegisterConstants(vm);
	RegisterSquirrelFunc(vm, SQLite_Open, "SQLite_Open", 0, NULL);
	RegisterSquirrelFunc(vm, SQLite_Exec, "SQLite_Exec", 2, "ps");
	RegisterSquirrelFunc(vm, SQLite_Query, "SQLite_Query", 2, "ps");
	RegisterSquirrelFunc(vm, SQLite_Close, "SQLite_Close", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_ErrCode, "SQLite_ErrCode", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_ExtendedErrCode, "SQLite_ExtendedErrCode", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_ErrMsg, "SQLite_ErrMsg", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_ErrStr, "SQLite_ErrStr", 1, "i");
	RegisterSquirrelFunc(vm, SQLite_ToggleExtendedErrCode, "SQLite_ToggleExtendedErrCode", 2, "pb");
	RegisterSquirrelFunc(vm, SQLite_NextRow, "SQLite_NextRow", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_ColumnData, "SQLite_ColumnData", 2, "pi");
	RegisterSquirrelFunc(vm, SQLite_ColumnCount, "SQLite_ColumnCount", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_ColumnName, "SQLite_ColumnName", 2, "pi");
	RegisterSquirrelFunc(vm, SQLite_ColumnDecltype, "SQLite_ColumnDecltype", 2, "pi");
	RegisterSquirrelFunc(vm, SQLite_ColumnBytes, "SQLite_ColumnBytes", 2, "pi");
	RegisterSquirrelFunc(vm, SQLite_Reset, "SQLite_Reset", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_Release, "SQLite_Release", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_Escape, "SQLite_Escape", 1, "s");

	// Make it compatible with official version
	RegisterSquirrelFunc(vm, SQLite_Open, "ConnectSQL", 0, NULL);
	RegisterSquirrelFunc(vm, SQLite_Close, "DisconnectSQL", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_Query, "QuerySQL", 2, "ps");
	RegisterSquirrelFunc(vm, SQLite_NextRow, "GetSQLNextRow", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_ColumnCount, "GetSQLColumnCount", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_ColumnData, "GetSQLColumnData", 2, "pi");
	RegisterSquirrelFunc(vm, SQLite_Release, "FreeSQLQuery", 1, "p");
	RegisterSquirrelFunc(vm, SQLite_Escape, "escapeSQLString", 1, "s");
}
