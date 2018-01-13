program Problem_3
    implicit none
    
    integer*8 :: number
    integer :: z
    
    number = 600851475143
    z = 2
    
    do while (z * z .le. number)
        if(mod(number,z) .eq. 0) then
            number = number / z
        else
            z = z + 1
        end if
    end do
    
    print *,number
    read(*,*)
end program Problem_3