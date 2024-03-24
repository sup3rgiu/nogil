static const char *opcode_names[256] = {
    "unknown_opcode",
    "CLEAR_ACC",
    "CLEAR_FAST",
    "ALIAS",
    "COPY",
    "MOVE",
    "FUNC_HEADER",
    "METHOD_HEADER",
    "CFUNC_HEADER",
    "CFUNC_HEADER_NOARGS",
    "CFUNC_HEADER_O",
    "CMETHOD_NOARGS",
    "CMETHOD_O",
    "FUNC_TPCALL_HEADER",
    "UNARY_POSITIVE",
    "UNARY_NEGATIVE",
    "UNARY_NOT",
    "UNARY_NOT_FAST",
    "UNARY_INVERT",
    "BINARY_MATRIX_MULTIPLY",
    "BINARY_POWER",
    "BINARY_MULTIPLY",
    "BINARY_MODULO",
    "BINARY_ADD",
    "BINARY_SUBTRACT",
    "BINARY_SUBSCR",
    "BINARY_FLOOR_DIVIDE",
    "BINARY_TRUE_DIVIDE",
    "BINARY_LSHIFT",
    "BINARY_RSHIFT",
    "BINARY_AND",
    "BINARY_XOR",
    "BINARY_OR",
    "IS_OP",
    "CONTAINS_OP",
    "COMPARE_OP",
    "INPLACE_FLOOR_DIVIDE",
    "INPLACE_TRUE_DIVIDE",
    "INPLACE_ADD",
    "INPLACE_SUBTRACT",
    "INPLACE_MULTIPLY",
    "INPLACE_LSHIFT",
    "INPLACE_RSHIFT",
    "INPLACE_AND",
    "INPLACE_XOR",
    "INPLACE_OR",
    "INPLACE_MODULO",
    "INPLACE_MATRIX_MULTIPLY",
    "INPLACE_POWER",
    "LOAD_FAST",
    "LOAD_NAME",
    "LOAD_CONST",
    "LOAD_ATTR",
    "LOAD_GLOBAL",
    "LOAD_METHOD",
    "LOAD_DEREF",
    "LOAD_CLASSDEREF",
    "STORE_FAST",
    "STORE_NAME",
    "STORE_ATTR",
    "STORE_ATTR_REG",
    "STORE_GLOBAL",
    "STORE_SUBSCR",
    "STORE_SUBSCR_REG",
    "STORE_DEREF",
    "DELETE_FAST",
    "DELETE_NAME",
    "DELETE_ATTR",
    "DELETE_GLOBAL",
    "DELETE_SUBSCR",
    "DELETE_DEREF",
    "CALL_FUNCTION",
    "CALL_FUNCTION_EX",
    "CALL_METHOD",
    "CALL_INTRINSIC_1",
    "CALL_INTRINSIC_N",
    "RETURN_VALUE",
    "RAISE",
    "YIELD_VALUE",
    "YIELD_FROM",
    "JUMP",
    "JUMP_IF_FALSE",
    "JUMP_IF_TRUE",
    "JUMP_IF_NOT_EXC_MATCH",
    "POP_JUMP_IF_FALSE",
    "POP_JUMP_IF_TRUE",
    "GET_ITER",
    "GET_YIELD_FROM_ITER",
    "FOR_ITER",
    "IMPORT_NAME",
    "IMPORT_FROM",
    "IMPORT_STAR",
    "BUILD_SLICE",
    "BUILD_TUPLE",
    "BUILD_LIST",
    "BUILD_SET",
    "BUILD_MAP",
    "END_EXCEPT",
    "CALL_FINALLY",
    "END_FINALLY",
    "LOAD_BUILD_CLASS",
    "GET_AWAITABLE",
    "GET_AITER",
    "GET_ANEXT",
    "END_ASYNC_WITH",
    "END_ASYNC_FOR",
    "UNPACK",
    "MAKE_FUNCTION",
    "SETUP_WITH",
    "END_WITH",
    "SETUP_ASYNC_WITH",
    "LIST_EXTEND",
    "LIST_APPEND",
    "SET_ADD",
    "SET_UPDATE",
    "DICT_MERGE",
    "DICT_UPDATE",
    "SETUP_ANNOTATIONS",
    "SET_FUNC_ANNOTATIONS",
    "WIDE",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "unknown_opcode",
    "debug_regs"
};