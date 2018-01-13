program Problem_2
    integer f_1, f_2, f_3, sum
    
    f_1 = 1
    f_2 = 1
    f_3 = f_1 + f_2
    sum = 0
    
    do while (f_3 .lt. 4000000)
        if (mod(f_3, 2) .eq. 0) then
            sum = sum + f_3
        end if
        
        f_1 = f_2
        f_2 = f_3
        f_3 = f_1 + f_2
    end do
    
    print *,sum
    read(*,*)    
end program Problem_2
    