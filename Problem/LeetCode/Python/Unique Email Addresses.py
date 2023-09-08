class Solution:
    def numUniqueEmails(self, emails):
        res = set()
        for str in emails:
            local, domain = str.split('@')
            # print(local, domain)
            local_new = []

            for c in local:
                if c == '.': continue
                elif c == '+': break
                local_new.append(c)

            local = ''.join(local_new)
            res.add(local + '@' + domain)

        return len(res)


test = Solution()
emails = ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
print(test.numUniqueEmails(emails))