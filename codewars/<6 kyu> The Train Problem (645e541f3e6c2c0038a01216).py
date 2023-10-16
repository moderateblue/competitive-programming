def is_valid_train_arrangement(before, after):
    if len(before) != len(after):
        return False
    
    brtrains = []
    bltrains = []
    artrains = []
    altrains = []
    
    for i, x in enumerate(before):
        if x == '>':
            brtrains.append(i)
        elif x == '<':
            bltrains.append(i)
    for i, x in enumerate(after):
        if x == '>':
            artrains.append(i)
        elif x == '<':
            altrains.append(i)
            
    if len(brtrains) != len(artrains) or len(bltrains) != len(altrains):
        return False
    if len(brtrains) == 0 and len(artrains) == 0 and len(bltrains) == 0 and len(altrains) == 0:
        return True
    
    for i, x in enumerate(brtrains):
        if x > artrains[i]:
            return False
    for i, x in enumerate(bltrains):
        if x < altrains[i]:
            return False
    
    if len(brtrains) != 0 and len(artrains) != 0 and len(bltrains) != 0 and len(altrains) != 0:
        bbetween = []
        abetween = []
        
        if brtrains[0] < bltrains[0]:

            #before
            bj = 0
            for i in range(len(brtrains) - 1):
                between_num = 0
                while bj < len(bltrains) and brtrains[i] < bltrains[bj] and bltrains[bj] < brtrains[i + 1]:
                    between_num += 1
                    bj += 1
                bbetween.append(between_num)
            remain = [index for index in bltrains if index > brtrains[len(brtrains) - 1]]
            count = 0
            for x in remain:
                if x > brtrains[len(brtrains) - 1]:
                    count += 1
            bbetween.append(count)

            #after
            aj = 0
            for i in range(len(artrains) - 1):
                between_num = 0
                while aj < len(altrains) and artrains[i] < altrains[aj] and altrains[aj] < artrains[i + 1]:
                    between_num += 1
                    aj += 1
                abetween.append(between_num)
            remain = [index for index in altrains if index > artrains[len(artrains) - 1]]
            count = 0
            for x in remain:
                if x > artrains[len(artrains) - 1]:
                    count += 1
            abetween.append(count)
        
        else:
            
            #before
            bj = 0
            for i in range(len(bltrains) - 1):
                between_num = 0
                while bj < len(brtrains) and bltrains[i] < brtrains[bj] and brtrains[bj] < bltrains[i + 1]:
                    between_num += 1
                    bj += 1
                bbetween.append(between_num)
            remain = [index for index in brtrains if index > bltrains[len(bltrains) - 1]]
            count = 0
            for x in remain:
                if x > bltrains[len(bltrains) - 1]:
                    count += 1
            bbetween.append(count)

            #after
            aj = 0
            for i in range(len(altrains) - 1):
                between_num = 0
                while aj < len(artrains) and altrains[i] < artrains[aj] and artrains[aj] < altrains[i + 1]:
                    between_num += 1
                    aj += 1
                abetween.append(between_num)
            remain = [index for index in artrains if index > altrains[len(altrains) - 1]]
            count = 0
            for x in remain:
                if x > altrains[len(altrains) - 1]:
                    count += 1
            abetween.append(count)
        
        print(bbetween)
        print(abetween)

        for i, x in enumerate(bbetween):
            if x != abetween[i]:
                return False
        
    return True
