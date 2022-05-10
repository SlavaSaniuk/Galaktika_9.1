Attribute VB_Name = "Module1"
Sub GroupStr()
    Dim iLastRow As Long, lStart As Long, lEnd As Long
    Dim i As Long
    Application.ScreenUpdating = False
    iLastRow = Cells(Rows.Count, 1).End(xlUp).Row
    lStart = 6: i = 6
    Do
        If Cells(i, 1).Font.Bold Then
            lEnd = i - 1
            Range(Cells(lStart, 1), Cells(lEnd, 1)).EntireRow.Group
            lStart = i + 1
        End If
        If i = iLastRow Then
            lEnd = i
            Range(Cells(lStart, 1), Cells(lEnd, 1)).EntireRow.Group
        End If
        i = i + 1
    Loop While i <= iLastRow
    Application.ScreenUpdating = True
End Sub
Sub GroupStr2()
    Dim iLastRow As Long, lStart As Long, lEnd As Long
    Dim i As Long
    Application.ScreenUpdating = False
    iLastRow = Cells(Rows.Count, 1).End(xlUp).Row
    lStart = 7: i = 7
    
    Do
        If (Cells(i, 3).Font.Bold Or Cells(i, 1).Font.Bold) Then
            lEnd = i - 1
            Range(Cells(lStart, 3), Cells(lEnd, 3)).EntireRow.Group
            If (Cells(i, 1).Font.Bold) Then
                lStart = i + 2
                i = i + 1
            Else
                lStart = i + 1
            End If
        End If
        If i = iLastRow Then
            lEnd = i
            Range(Cells(lStart, 3), Cells(lEnd, 3)).EntireRow.Group
        End If
        
        i = i + 1
    Loop While i <= iLastRow
    Application.ScreenUpdating = True
End Sub
Sub GroupStr3()
    Dim iLastRow As Long, lStart As Long, lEnd As Long, k As Long, n As Long
    Dim i As Long
    Application.ScreenUpdating = False
    iLastRow = Cells(Rows.Count, 1).End(xlUp).Row
    lStart = 8: i = 8: n = 0: k = 0
    Do
     If Cells(i, 4) = "" Then
        n = n + 1
     Else
        k = k + 1
     End If
        If (Cells(i, 4).Font.Bold And Cells(i, 4) <> "") Then
            lEnd = i - 1 - n
            If (k > 1) Then
                Range(Cells(lStart, 4), Cells(lEnd, 4)).EntireRow.Group
            End If
            lStart = i + 1
            n = 0
            k = 0
        End If
        If i = iLastRow Then
            lEnd = i
            Range(Cells(lStart, 4), Cells(lEnd, 4)).EntireRow.Group
        End If
        
        i = i + 1
    Loop While i <= iLastRow
    Application.ScreenUpdating = True
End Sub

