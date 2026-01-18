! error_demo.f90
!
! Example program demonstrating the usage of the nng_error_string function
program error_demo
    use nng
    use nng_util
    implicit none

    integer(c_int) :: result
    character(:), allocatable :: error_msg

    ! Try to close an invalid socket to generate an error
    result = nng_close(nng_socket(42))  ! Invalid socket to trigger error

    ! Convert the error code to a human-readable string
    error_msg = nng_error_string(result)

    print *, 'Error code:', result
    print *, 'Error message:', error_msg

    ! Test with a few known error codes
    print *
    print *, 'Known error codes:'
    
    error_msg = nng_error_string(NNG_EINVAL)
    print *, 'NNG_EINVAL (', NNG_EINVAL, '): ', error_msg
    
    error_msg = nng_error_string(NNG_ECLOSED)
    print *, 'NNG_ECLOSED (', NNG_ECLOSED, '): ', error_msg
    
    error_msg = nng_error_string(NNG_ETIMEDOUT)
    print *, 'NNG_ETIMEDOUT (', NNG_ETIMEDOUT, '): ', error_msg

end program error_demo