CREATE TABLE [dbo].[Table]
(
	[id] INT NOT NULL PRIMARY KEY, 
    [account_Name] NVARCHAR(50) NULL, 
    [email_address] NVARCHAR(50) NULL, 
    [checking_account] MONEY NOT NULL DEFAULT 0, 
    [savings_account] MONEY NOT NULL DEFAULT 0
)
