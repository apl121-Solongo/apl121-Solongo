Start

Declare i, coldDay as Integer
Declare temp, fahrenheit, minTemp as Real
Declare category, clothes as String

minTemp = 999
coldDay = 0

For i = 1 to 7
    Output "Odor " & i & " - temp (C):"
    Input temp

    While temp < -50 or temp > 50
        Output "INVALID temperature"
        Input temp
    End While

    fahrenheit = temp * 9 / 5 + 32

    If temp >= 5 Then
        category = "Dulaahan"
        clothes = "Nimgen hurem"
    Else If temp >= 0 Then
        category = "Seruuhen"
        clothes = "Tsamts, hurem"
    Else If temp >= -10 Then
        category = "Huiten"
        clothes = "Uwliin kurtik, malgai"
    Else If temp >= -20 Then
        category = "Mash huiten"
        clothes = "Zuzaan kurtik, beelii, oroolt"
    Else
        category = "Tas huiten"
        clothes = "Dulaan dawhar huwtsas, malgai, beelii, nooson umd"
    End If

    Output temp & "C = " & fahrenheit & "F, " & category & ", " & clothes

    If temp < minTemp Then
        minTemp = temp
        coldDay = i
    End If
Next i

Output "Hamgiin huiten udur: " & coldDay
Output "Hamgiin baga temp: " & minTemp & "C"

End