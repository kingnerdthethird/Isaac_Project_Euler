program Problem_1
integer sum, pauser
sum = 0

do i=1,999
    if(mod(i,3) .eq. 0 .or. mod(i,5) .eq. 0) then
        sum = sum + i
    end if
end do
        
print *,sum
read(*,*)
end program Problem_1