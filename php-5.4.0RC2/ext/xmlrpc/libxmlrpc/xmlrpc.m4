AC_DEFUN([XMLRPC_CHECKS],[	

AC_REQUIRE([AC_PROG_CC])
AC_REQUIRE([AC_PROG_LN_S])
AC_REQUIRE([AC_PROG_RANLIB])

AC_DEFINE(UNDEF_THREADS_HACK,,[ ])

XMLRPC_HEADER_CHECKS
XMLRPC_TYPE_CHECKS
XMLRPC_FUNCTION_CHECKS
])
