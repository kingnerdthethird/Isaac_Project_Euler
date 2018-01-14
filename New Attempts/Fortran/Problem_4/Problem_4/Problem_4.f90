program Problem_4
    implicit none
    
    integer :: number, temp, i, j
    
    number = 0
    temp = 0
    
    do i = 1000, 100, -1
        do j = 1000, 100, -1
            temp = i * j
            if (temp .gt. number) then
                if (palindrome(temp)) then
                    number = temp
                end if
            end if
        end do
    end do
    
    print *,number
    
    read(*,*)
    
    contains
        logical function palindrome(n)
            integer, intent(in) :: n
            integer :: x, y
    
            x = n
            y = 0
    
            do while (x .gt. 0)
                y = y * 10
                y = y + mod(x, 10)
                x = x / 10
            end do
    
            if(y .eq. n) then
                palindrome = .true.
            else
                palindrome = .false.
            end if
    
            return
        end  
end program Problem_4